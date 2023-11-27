#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - Copies a files content to another
 * @ac: Counts the arguments passed
 * @av: Stores the arguments passed
 * Return: 0 on Success
 */

int main(int ac, char **av)
{
	int fd, fd2;
	ssize_t rd_rt, wr_rt;
	char buf[BUFFER_SIZE];

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
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((rd_rt = read(fd, buf, BUFFER_SIZE)) > 0)
	{
		wr_rt = write(fd2, buf, rd_rt);
		if (wr_rt < 0 || wr_rt != rd_rt)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (rd_rt < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (close(fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd2) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
