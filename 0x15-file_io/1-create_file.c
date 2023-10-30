#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int kt;
	int kadah;
	int bbn;

	if (!filename)
		return (-1);

	kt = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (kt == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (kadah = 0; text_content[kadah]; kadah++)
		;

	bbn = write(kt, text_content, kadah);

	if (bbn == -1)
		return (-1);

	close(kt);

	return (1);
}
