#include "stdio.h"
#include "main.h"
/**
 * main - Wntry point. fond largest prime factor
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned long i = 2;
	unsigned long biggest = 0;
	unsigned long number = 612852475143;

	while (number > i)/* B */
	{
	while (number % i == 0)/* C */
	{
	if (i > biggest)
	biggest = i;
	number = number / i;
	}
	i++;/* D */
	}
	printf("%lu\n", biggest);
	return (0);
}
