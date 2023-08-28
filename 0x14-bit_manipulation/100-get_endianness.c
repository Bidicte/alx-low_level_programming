#include "main.h"

/**
 * get_endianness - vérifie si une machine est little ou big endian
 * Return: 0 ou 1
 */
int get_endianness(void)
{
unsigned int compteur = 1;
char *c = (char *) &compteur;
return (*c);
}
