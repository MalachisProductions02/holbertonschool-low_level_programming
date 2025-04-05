#include "main.h"

/**
 * create_file - Creates a file and writes text to it
 * @filename: File's name
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on succes, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_len, text_len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;

		write_len = write(fd, text_content, text_len);
		if (write_len == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
