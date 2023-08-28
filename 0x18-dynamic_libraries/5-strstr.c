#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the main string
 * @needle: the substring
 * Return: where the substring is in the main string or 0
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *h = haystack;
char *n = needle;

while (*n && *h == *n)
{
h++;
n++;
}

if (!(*n))
{
return (haystack);
}

haystack++;
}
return (NULL);
}
