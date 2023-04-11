#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

/**
 * read_file_content - reads the content of a file
 * @filename: pointer to file name
 * Return: pointer to a buffer
 */
char *read_file_content(const char *filename)
{
	int fd, n_read, size = 1024, total = 0;
	char *buf = malloc(size);

	if (!buf)
		return (NULL);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);

	while ((n_read = read(fd, buf + total, size - total)))
	{
		if (n_read == -1)
			return (NULL);
		total += n_read;
		if (total >= size)
		{
			size += 1024;
			buf = realloc(buf, size);
			if (!buf)
				return (NULL);
		}
	}
	if (close(fd) == -1)
		return (NULL);

	buf = realloc(buf, total + 1);
	if (!buf)
		return (NULL);

	buf[total] = '\0';

	return (buf);
}

/**
 * write_file_content - writes the content of a buffer to a file
 * @filename: pointer to file name
 * @buf: buffer containing the file content
 * @len: size of the buffer
 * Return: 1 or -1
 */
int write_file_content(const char *filename, char *buf, int len)
{
	int fd, n_write, total = 0;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
		return (-1);

	while (total < len)
	{
		n_write = write(fd, buf + total, len - total);
		if (n_write == -1)
			return (-1);
		total += n_write;
	}

	if (close(fd) == -1)
		return (-1);

	return (1);
}


/**
 * main- entry point
 * @argc: count
 * @argv: storage
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *buf;
	int len, ret;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = read_file_content(argv[1]);
	if (!buf)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	len = strlen(buf);
	ret = write_file_content(argv[2], buf, len);
	if (ret == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	free(buf);
	exit(0);
}
