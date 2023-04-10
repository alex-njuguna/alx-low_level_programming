#include "main.h"

/**
 * create_file - create a file
 * @filename: pointer to filename to be created
 * @text_content:  pointer to text to be created
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, urefu = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[urefu])
			urefu++;
		if (write(fd, text_content, urefu) != urefu)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
