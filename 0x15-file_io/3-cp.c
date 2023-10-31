#include "main.h"
char *c_buff(char *f);
void c_file(int p);

/**
 * main - function that copie contents from file to another file
 * @argc: nuber of args
 * @argv: value of args
 * Return: 0
 */

int main(int argc, char **argv)
{
	int wr, rd, p, to;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = c_buff(argv[2]);
	p = open(argv[1], O_RDONLY);
	rd = read(p, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (p == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(to, buff, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
			free(buff);
			exit(98);
		}
		rd = read(p, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buff);
	c_file(p);
	c_file(to);
	return (0);
}

/**
 * c_buff - funtion that create a 1024 buffer
 *@buff: storing file place
 * Return: pointer to the allocated buffer
 */

char *c_buff(char *buff)
{
	buff = malloc(1024);
	if (buff == NULL)
		return (NULL);
	return (buff);
}

/**
 * c_file - function that close file desc
 * @p: file desc in question
 */

void c_file(int p)
{
	int t;

	t = close(p);
	if (t == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", p);
		exit(100);
	}
}

