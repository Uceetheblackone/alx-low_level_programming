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
	char *b;
	ssize_t op;
	ssize_t actual_num;
	ssize_t rd;

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);
	b = malloc(sizeof(char) * letters);
	rd = read(op, b, letters);
	actual_num = write(STDOUT_FILENO, b, rd);

	free(b);
	close(op);
	return (actual_num);
}

