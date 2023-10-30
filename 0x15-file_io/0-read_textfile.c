#include "main.h"

/**
 * read_textfile - function that read text from file
 * @filename: the file where we gonna read
 * @letters: number fo letters we should read
 * Return: 0 or number of letters that has been read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t rd, wr, p;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	p = open(filename, O_RDONLY);
	if (p == -1)
		return (0);
	rd = read(p, buf, letters);
	if (rd < 0)
	{
		close(p);
		return (0);
	}
	wr = write(STDOUT_FILENO, buf, rd);
	free(buf);
	close(p);
	if (wr != rd)
		return (0);
	return (wr);
}
