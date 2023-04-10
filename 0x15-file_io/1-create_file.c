#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: File to be created.
 * @text_content: string to write to the file.
 * Return: 1 on success, -1 if it fais , file cannot be written......
 */
int create_file(const char *filename, char *text_content)
{
	int fd, actual_num, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	actual_num = write(fd, text_content, l);

	if (fd == -1 || actual_num == -1)
		return (-1);

	close(fd);

	return (1);
}

