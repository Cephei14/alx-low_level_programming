#include "main.h"

/**
 * read_textfile - function that read text from file
 * @filename: the file where we gonna read
 * @letters: number fo letters we should read
 * Return: 0 or number of letters that has been read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *p;
	char bof[1024];
	ssize_t rd, wr;

	if (filename == NULL)
		return (0);
	p = open(filename, O-RDONLY);
	if (p == -1)
		return (0);
	rd = read(p, bof, letters);
	if (rd <= 0)
	{
		fclose(p);
		return (0);
	}
	wr = write(1, bof, rd);
	fclose(p);
	if (wr != rd)
		return (0);
	return (wr);
}
