#include <stdio.h>

/**
 * rev_string -  The function reverses string
 * @s: the string to reverse
 *
 * Return: Nothing
 */

void rev_string(char *s)
{

int i;
int j;
for (i = 0; s[i] != '\0'; i++)
{    
printf("%c", s[i]);
}
for (j = '\0'; s[j] != '\0'; j++)
  {
    printf("%c", s[j]);
  }


}
