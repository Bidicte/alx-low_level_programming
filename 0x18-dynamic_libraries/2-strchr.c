#include "main.h"

/**
 * *_strchr - copies the src to dest
 * @s: var 1
 * @c:var 2
 * Return: caractere
 */
char *_strchr(char *s, char c)
{
char *p = s;
for (; *p != '\0'; p++)
{
if (*p == c)
return (p);
}
if (*p == c)
return (p);
return (0);
}
