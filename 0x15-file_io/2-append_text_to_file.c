#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: pointer to name of file.
 * @text_content: string to add to end of file.
 *
 * Return: If a filename is NULL - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int p, r, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	p = open(filename, O_WRONLY | O_APPEND);
	r = write(o, text_content, len);

	if (p == -1 || r == -1)
		return (-1);

	close(p);

	return (1);
}
