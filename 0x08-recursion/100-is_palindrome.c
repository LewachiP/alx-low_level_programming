#include "main.h"

int check_pal(char *s , int i, int len);
int_strien_recursion(char *);

/**
 *
 * is_palindeome - checks if the string is a palindrome
 * @s: srting to be reverse
 *
 * Return 1 if it i, 0 if not
 */

int is_palindeome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strien_recursion(s)));
}

/**
 * check_pal - checks the character recursively for palidrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
