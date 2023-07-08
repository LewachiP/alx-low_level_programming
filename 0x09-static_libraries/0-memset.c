#include "main.h"
/**
 * _memset - fill a block of memory with specific value
 * @s: stating address of memory to be filled
 * @b: the direct value
 * @n: number of bytes to be changed
 *
 * Return changed array with new value of n bytes
 */
char *memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
