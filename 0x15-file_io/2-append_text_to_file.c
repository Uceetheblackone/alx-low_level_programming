#include "main.h"

/**
 * append_text_to_file - functions that appends text to the end of file.
 * @filename: name of file.
 * @text_content: string to add at the end of the file.
 * Return: 1 on success and -1 on failure or when filename is NULL.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, actual_num, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	actual_num = write(a, text_content, l);

	if (a == -1 || actual_num == -1)
		return (-1);

	close(a);

	return (1);
}

