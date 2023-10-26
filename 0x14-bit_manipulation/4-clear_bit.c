#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - This prog sets the value of a bit to 0 at a given index
 * @x: parameter
 * @index: index
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *x, unsigned int index)
{
	if (index > sizeof(x) * 8)
		return (-1);
	*x &= ~(1 << index);
	return (1);
}
