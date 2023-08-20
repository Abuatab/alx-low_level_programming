#include "main.h"

/**
 * _strlen - Calculates the length of the string
 * @s: The string to measure
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * create_file - Creates a file
 * @filename: The name of the file to be created
 * @text_content: The content to put in the file
 * Return: 1 on success and 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, s, o;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IWUSR | S_IRUSR);
	if (fd < 0)
		return (-1);
	s = _strlen(text_content);
	o = write(fd, text_content, s);
	if (o < 0)
		return (-1);

	close(fd);
	return (1);
}
