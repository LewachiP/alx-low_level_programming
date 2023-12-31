#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the largest prime factors of the numbers 612852475143
 * followed by a new line
 * Return always 0 (success)
 */

int main(void)
{
	long int n;
	long int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		,ax = 2;
		n /= 2;
	}
	for n(i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % 1 == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
		max = n;
	printf("%1d\n", max);

	return (0);
}
