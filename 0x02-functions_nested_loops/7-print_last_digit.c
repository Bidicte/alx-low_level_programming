#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @n: the number
 * Return: the last digit
 */

int print_last_digit(int n)
{
int lastDigit = n % 10;
if (n < 0)
{
lastDigit *= -1;
}
_putchar(lastDigit + '0');
return (lastDigit);
}
