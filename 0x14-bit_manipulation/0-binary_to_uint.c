#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - binary can be converted through unsigned int
 * @b: A string that takes binary number or numbers
 * Return: A numbers that are coverted
 */

unsigned int binary_to_uint(const char *b)
{
	int xyz;
	unsigned int kadah = 0;

	if (!b)
	return (0);
	for (xyz = 0; b[xyz]; xyz++)
	{
		if (b[xyz] < '0' || b[xyz] > '1')
		return (0);
	kadah = 2 * kadah + (b[xyz] - '0');
	}
	return (kadah);
}
