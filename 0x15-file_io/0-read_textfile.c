#include "main.h"

/**
 * read_textfile - reads a file and prints it to the POSIX standard output
 * @filename: The file to read from
 * @letters: The number of characters to print
 * Return: The number of characters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes;
	ssize_t total;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
	{
		perror("malloc");
		close(fd);
		return (0);
	}
	total = 0;
	while ((bytes = read(fd, buffer, letters)) > 0)
	{
		write(STDOUT_FILENO, buffer, bytes);
		total += bytes;
	}
	if (bytes == -1)
	{
		perror("read");
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (total);
}
