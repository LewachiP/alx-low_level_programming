#include <stdlib.h>
#include "main.h"
/**
 * *array_range- create an array of intergers
 * @min: minumum range of values stored
 * @max: maximum range of values stored and number of elements
 * Return: pointer to the new array
 */
int * array_rance(int min, int max)
{
	int *ptr;
	int i, size;
	if (min > value)
		return(NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return(NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return(ptr);
}
