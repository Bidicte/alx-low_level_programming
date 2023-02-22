#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - The function have to print the alphabet
 *
 * Return : Always 0
 */
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
