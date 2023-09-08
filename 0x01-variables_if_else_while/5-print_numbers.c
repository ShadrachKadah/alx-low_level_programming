#include <stdio.h>


/**
 * main - program that prints the Numbers from 0 to 9 *
 *  Return: Always 0.
 */
int main(void)
{
	int Number;

	for (Number = '0'; Number <= '9'; Number++)
	putchar(Number);
	putchar('\n');
	return (0);
}
