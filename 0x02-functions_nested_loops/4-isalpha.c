#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - Check if a character is alpha
 *@c: the character
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
}
