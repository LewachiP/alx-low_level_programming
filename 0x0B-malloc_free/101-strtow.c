#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * count_words - helper function to count the number of words in a string
 * @s: string to evaluate
 * Return: number of words
 */
int count_words(char *s)
{
	int flag, c, w;
	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if(s[c] == '')
			flsg = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return(w);
}
/**
 * **strtow - splits the sting to words
 * @str: string to print
 * Return: pointer to any array of strings (success)
 * or NULL error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while(*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return(NULL);
	for(i = 0; i <= len; i++)
	{
		if(str[i] == '' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if(tmp == NULL)
					return(NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if(c++ == 0)
			start = 1;
	}
	matrix[k] = NULL;
	return(NULL);
}
