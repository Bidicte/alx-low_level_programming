#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string
 *
 * Return:number
 */
unsigned int binary_to_uint(const char *b)
{
int compteur;
unsigned int valeur_decimal = 0;
if (!b)
return (0);
for (compteur = 0; b[compteur]; compteur++)
{
if (b[compteur] < '0' || b[compteur] > '1')
return (0);
valeur_decimal = 2 * valeur_decimal + (b[compteur] - '0');
}
return (valeur_decimal);
}
