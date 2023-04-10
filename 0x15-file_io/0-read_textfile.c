#include "main.h"

/**
 * read_textfile - read a text file and prints it
 * @filename: pointer to the file name
 * @letters:params
 * Return:no of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int read_count, fd, write_count;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	read_count = read(fd, buffer, letters);
	if (read_count == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	write_count = write(STDOUT_FILENO, buffer, read_count);
	free(buffer);
	close(fd);

	if (read_count != write_count)
		return (0);

	return (write_count);
}
