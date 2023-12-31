#include "main.h"
#include <stdlib.h>

/**
 * create_size - creates an array of size and assigns char c
 * @size: size of array
 * @c:char to assign
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(*char) * size);

	if (size == 0 || size == NULL)
		return(NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
