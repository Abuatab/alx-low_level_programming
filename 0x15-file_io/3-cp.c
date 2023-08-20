#include "main.h"

/**
 * main - Copies a files content to another
 * @ac: Counts the arguments passed
 * @av: Stores the arguments passed
 * Return: 0 on Success
 */

int main(int ac, char **av)
{
	int fd, fd2;
	ssize_t rd_rt;
	char *buf;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0662);
	if (fd2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	buf = malloc(1024);
	rd_rt = read(fd, buf, 1024);
	write(fd2, buf, rd_rt);
	if (close(fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(99);
	}
	if (close(fd2) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(99);
	}
	free(buf);
	close(fd);
	close(fd2);
	return (0);
}
