#include "main.h"
/**
 * cap_string - capitalises all words of a string
 * @str: the string to be cspitalized
 * Return: a pointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\n' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		inex == 0)
			str[index] -= 32;
		index++;
	}
	return (str);
}