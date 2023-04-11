#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: pointer to file to append to
 * @text_content: pointer to text to append
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		write_len = write(fd, text_content, len);

		if (write_len == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
