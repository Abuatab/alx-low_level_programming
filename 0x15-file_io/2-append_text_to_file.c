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
 * append_text_to_file - Appends text to a file
 * @filename: The name of the file to append the text to
 * @text_content: The text to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, s, o;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
		text_content = "";
	fd = open(filename, O_WRONLY | O_APPEND, S_IWUSR | S_IRUSR);
	if (fd < 0)
		return (-1);
	s = _strlen(text_content);
	o = write(fd, text_content, s);
	if (o < 0)
		return (-1);

	close(fd);
	return (1);
}
