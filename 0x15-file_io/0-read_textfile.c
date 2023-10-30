#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int sk;
	ssize_t klt, gme;
	char *bbn;

	if (!filename)
		return (0);

	sk = open(filename, O_RDONLY);

	if (sk == -1)
		return (0);

	bbn = malloc(sizeof(char) * (letters));
	if (!bbn)
		return (0);

	klt = read(sk, bbn, letters);
	gme = write(STDOUT_FILENO, bbn, klt);

	close(sk);

	free(bbn);

	return (gme);
}
