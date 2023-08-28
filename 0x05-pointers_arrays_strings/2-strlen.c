#include <stdio.h>
#include <string.h>

/**
 * _strlen - the function that shows the length of sentence or word
 *@s: the string
 *
 * Return: 0
 */

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i += 1;
}
return (i);
}
