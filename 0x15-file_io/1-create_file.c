#include "main.h"

/**
 * create_file - function that create a file
 * @filename: the name of the file that gonna be created
 * @text_content: text to be written to the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int p, wr, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[l])
			l++;
	}
	p = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (p == -1)
		return (-1);
	wr = write(STDOUT_FILENO, text_content, l);
	if (wr == -l)
		return (-1);
	close(p);
	return (1);
}
