#include <stdlib.h>
#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number f times to copy b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i ++)
	{
		s[i] = b;
	}
	return(s);
}
/**
 * *_calloc - allocate memory for an array
 * @numem: number of element in the array
 * @size: size of each elemet
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int numem, unsigned int size)
{
	char *ptr;
	if (numem == 0 || size == 0)
		return(NULL);
	ptr = malloc(size * numem);
	if (ptr == NULL)
		return(NULL);
	_memset(ptr, 0, numem * size)
		return(ptr);
}
