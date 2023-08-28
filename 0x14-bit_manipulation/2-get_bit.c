#include "main.h"

/**
 * get_bit - returns the value n a decimal number
 * @n: to search
 * @index: index of the bit
 *
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
int valeur_bit;
if (index > 63)
return (-1);
valeur_bit = (n >> index) & 1;
return (valeur_bit);
}
