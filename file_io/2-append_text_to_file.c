#include "main"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: File's name
 * @text_content: A NULL terminated string to add at the end of the file
 * Return: 1 on succes, -1 on failure
 */
int apped_text_to_file(const char *filename, char *text_content)
{
	int fd, write_len, text_len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
