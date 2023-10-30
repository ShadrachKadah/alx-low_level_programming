#include "main.h"
#include <stdio.h>

/**
 * error_file - checks if files can be opened.
 * @folder_from: folder_from.
 * @folder_to: folder_to.
 * @argv: arguments vector.
 * Return: no return.
 */
void error_file(int folder_from, int folder_to, char *argv[])
{
	if (folder_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (folder_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int folder_from, folder_to, err_close;
	ssize_t nchars, sak;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	folder_from = open(argv[1], O_RDONLY);
	folder_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(folder_from, folder_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(folder_from, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		sak = write(folder_to, buf, nchars);
		if (sak == -1)
			error_file(0, -1, argv);
	}

	err_close = close(folder_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", folder_from);
		exit(100);
	}

	err_close = close(folder_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", folder_from);
		exit(100);
	}
	return (0);
}
