#include "main.h"

/**
 * flip_bits - count numb of bits needed to be flipped
 * @n: number
 * @m: numb to flip n to
 *
 * Return: necessary numb of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
