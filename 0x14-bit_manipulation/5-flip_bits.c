#include "main.h"

/**
 * flip_bits - counts the number of bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int compteur, nbre = 0;
unsigned long int actuel;
unsigned long int exclu = n ^ m;
for (compteur = 63; compteur >= 0; compteur--)
{
actuel = exclu >> compteur;
if (actuel & 1)
nbre++;
}
return (nbre);
}
