#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int es;
	int myself;
	int sak;

	if (!filename)
		return (-1);

	es = open(filename, O_WRONLY | O_APPEND);

	if (es == -1)
		return (-1);

	if (text_content)
	{
		for (myself = 0; text_content[myself]; myself++)
			;

		sak = write(es, text_content, myself);

		if (sak == -1)
			return (-1);
	}

	close(es);

	return (1);
}
