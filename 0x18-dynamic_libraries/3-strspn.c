#include <string.h>
#include "main.h"

/**
 * _strspn - finds the length of a prefix substring
 * @s: the string
 * @accept: the characters that are being matched
 * Return: the length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
while (*s && strchr(accept, *s))
{
length++;
s++;
}
return (length);
}
