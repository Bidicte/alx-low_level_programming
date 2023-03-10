#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion - the function prints the string in reverse
 * @s: a string to print
 *
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
printf("%c", *s);
}
}
