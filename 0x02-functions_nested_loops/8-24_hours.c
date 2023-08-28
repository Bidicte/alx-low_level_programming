#include <stdio.h>
#include <time.h>

/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer
 *
 *
 * Return: void
 */
void jack_bauer(void)
{
int hour, min;
for (hour = 0; hour < 24; hour++)
{
for (min = 0; min < 60; min++)
{
putchar((hour / 10) + '0');
putchar((hour % 10) + '0');
putchar(':');
putchar((min / 10) + '0');
putchar((min % 10) + '0');
putchar('\n');
}
}

}
