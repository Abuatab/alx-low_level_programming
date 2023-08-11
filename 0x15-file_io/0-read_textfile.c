#include "main.h"

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

int main(int ac, char **av)
{
	ssize_t n;

	if (ac != 2)
	{
		dprintf(2, "Usage: %s filename\n", av[0]);
		exit(1);
	}
	n = read_textfile(av[1], 114);
	printf("\n(printed chars: %li)\n", n);
	n = read_textfile(av[1], 1024);
	printf("\n(printed chars: %li)\n", n);
	return (0);
}
