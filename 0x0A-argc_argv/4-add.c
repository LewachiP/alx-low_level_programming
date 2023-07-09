#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *check_num - check string that are digits
 *#str: array string
 *Return 0 on success
 */
int check_num(char *str)
{
	/* declearing variable */
	unsigned int count;

	count = 0;

	while (count < strlen(str))/*count string */
	{
		if (!isdigit(str[count])) /*check if string there are digits*/
		{
			return (0);
		}
		count++;
	}
}
/**
 * mainp prints the name of the program
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return always 0 (on success)
 */
int main(int argc, char *argv[])
{
	/*declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)/* goes through the whole array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* atoi converts string to int*/
			sum += str_to_int;
		}
		/* condition if one of the numbers contain symbols that are not digits */

		else
		{
			printf("Error\n")
				return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
