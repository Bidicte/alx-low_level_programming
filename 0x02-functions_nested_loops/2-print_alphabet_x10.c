#include <stdio.h>

/**
 * print_alphabet_x10 - print alphabetx10
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
char ch;
int i;
for (i = 0 ; i < 10 ; i++)
{
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
}
}
