#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @a: first number
 * @b: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
        int w, countbit = 0;
        unsigned long int current;
        unsigned long int exclusive = a ^ b;

        for (w = 63; w >= 0; w--)
        {
                current = exclusive >> w;
                if (current & 1)
                        countbit++;
        }

        return (countbit);
}
