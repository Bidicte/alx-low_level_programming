#include "main.h"

/**
 * clear_bit - changer la valeur du bit à 0
 * @n: le pointeur
 * @index: index du bit à effacer
 *
 * Return: 1 ou -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
