#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read & print to STDOUT.
 * @filename: text file
 * @letters: number of letters
 * Return: j actual number of bytes read and printed,
 *        0 if NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t j;
	ssize_t i;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	i = read(fd, buf, letters);
	j = write(STDOUT_FILENO, buf, i);

	free(buf);
	close(fd);
	return (j);
}
