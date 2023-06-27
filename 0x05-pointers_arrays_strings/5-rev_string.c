#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: pointer pointing to a string
 * Return: 0
 */

void rev_string(char *s)
{
	int lenght, z, half;
	char temp;

	for (lenght = 0; s[length] != '\0'; length++)
	;
	z = 0;
	half = length / 2;

	while (half --)
	{
		temp = ,s[length - z - 1];
		s[length - z - 1] = s[z];
		s[z] = temp;
		z++;
	}
}
