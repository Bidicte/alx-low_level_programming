#include <stdio.h>

/**
 * swap_int - The function swaps two integers
 * @a: variable 1
 * @b: variable 2
 * Return: void
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
