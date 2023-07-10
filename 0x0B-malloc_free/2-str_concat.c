#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat -  get ends of input and adds together for size
 * s1: input 1 to concat
 * s2: input 2 to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char concat;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = ci = 0;

	while(s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		concat[i] = s2[ci];
		i++, ci++;
	}
	concat[i] = '\0';
	return(concat);
}
