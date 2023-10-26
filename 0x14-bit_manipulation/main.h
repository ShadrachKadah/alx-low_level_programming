#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
unsigned int binary_to_uint(const char *x);
void print_binary(unsigned long int m);
int get_bit(unsigned long int q, unsigned int index);
int set_bit(unsigned long int *y, unsigned int index);
int clear_bit(unsigned long int *x, unsigned int index);
unsigned int flip_bits(unsigned long int a, unsigned long int b);
int get_endianness(void);

#endif

