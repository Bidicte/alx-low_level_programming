#include "main.h"

/**
 * print_binary - prints the binary number
 * @n: to print in binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
int compteur, nbre = 0;
unsigned long int actuel;

for (compteur = 63; compteur >= 0; compteur--)
{
actuel = n >> compteur;

if (actuel & 1)
{
_putchar('1');
nbre++;
}
else if (nbre)
_putchar('0');
}
if (!nbre)
_putchar('0');
}
