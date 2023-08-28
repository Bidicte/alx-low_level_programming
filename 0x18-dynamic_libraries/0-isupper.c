#include "main.h"

/**
 * _isupper - prints if the characters are lowercase or not
 * @c:;character
 * Return: 0 ou 1
 */
int _isupper(int c)
{
if ('A' <= c && c <= 'Z')
return (1);
else
return (0);
}
