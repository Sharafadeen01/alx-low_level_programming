#include "main.h"
#include "main.h"

/**
 * print_number - print integers only
 * @n: integers
 * Return: Always 0 (success)
 */

void print_number(int n)
{
int x = n;
int digit;
int places = 1000000000;

if (n < 0)/* E */
{
x = -n;
_putchar('-');
}
if (n == INT_MAX || n == INT_MIN) /* D */
{
while (1)
{
if (n == INT_MAX)
{
_putchar('2');
_putchar('1');
_putchar('4');
_putchar('7');
_putchar('4');
_putchar('8');
_putchar('3');
_putchar('6');
_putchar('4');
_putchar('7');
break;
}
else if (n == INT_MIN)
{
_putchar('2');
_putchar('1');
_putchar('4');
_putchar('7');
_putchar('4');
_putchar('8');
_putchar('3');
_putchar('6');
_putchar('4');
_putchar('8');
break;
}
}
}
else if (n == 0)/* A */
_putchar('0');
else
{
while (places > x)/* B */
places /= 10;
while (places > 0)
{
digit = x / places;/* C */
_putchar((digit % 10) + '0');
places /= 10;
}
}
}
