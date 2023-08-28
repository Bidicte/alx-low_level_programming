#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @str: the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *str)
{
int result = 0;
int sign = 1;
int i = 0;

while (str[i] == ' ' || str[i] == '\t')
{
i++;
}
if (str[i] == '-')
{
sign = -1;
i++;
}
else if (str[i] == '+')
{
i++;
}

while (str[i] >= '0' && str[i] <= '9')
{
result = result * 10 + (str[i] - '0');
i++;
}
return (sign * result);
}
