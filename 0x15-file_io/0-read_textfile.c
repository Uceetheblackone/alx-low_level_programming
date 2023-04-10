#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the text file to be read.
 * @letters: number of letters it should read and write.
 * Return: The actual number of letters read and printed.
 * 0 when the filename is NULL, write fails or
 * does not return the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t actual_num;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	actual_num = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (actual_num);
}

