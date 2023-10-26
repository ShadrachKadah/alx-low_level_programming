#include "main.h"

/**
 * get_endianness - prog checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int g;
	char *h;

	g = 1;
	h = (char *)&g;
	return (*h);
}
