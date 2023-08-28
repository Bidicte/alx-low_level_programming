#include <stdio.h>

/**
 * factorial - The entry point
 *@n: the number
 *
 * Return: Always 0.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
return (n * factorial(n - 1));
}
