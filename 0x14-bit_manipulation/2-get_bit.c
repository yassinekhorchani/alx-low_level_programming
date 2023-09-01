#include "main.h"

/**
 * get_bit - returns the value of the bit at the index in the decimal number
 * @n: number to search
 * @index: the bit's index
 *
 * Return: the bit's value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

