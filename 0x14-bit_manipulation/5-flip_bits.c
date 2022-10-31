#include "main.h"

/**
 * flip_bits - count bits you need to flip to get from one number to another
 * need to flip to get from oner number to another.
 *
 * @n: first number
 * @m: second number
 * Return: number of flips to get from one number to the other
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int i = n ^ m;
unsigned int counter = 0;

while (i > 0)
{
counter++;
i &= (i - 1);
}
return (counter);
}
