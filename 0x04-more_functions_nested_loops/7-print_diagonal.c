#include "main.h"
/**
 * print_diagonal - print '\'
 * @n: number of times
 * Return: Always 0 (success)
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
	_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
	for (j = n - i; j < n; j++)
	{
	_putchar(' ')
}
	_putchar('\\');
	_putchar('\n');
}
}
