#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int n;
char ch;
for (n = 0; n <= 9; n++)
{
putchar((n % 16) + '0');
}

for (ch = 'a'; ch <= 'e'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
