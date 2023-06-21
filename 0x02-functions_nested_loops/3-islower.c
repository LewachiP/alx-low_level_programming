#include "main.h"
/**
 * 3-islower.c - checks for lower case characters
 * @c: the character
 * Return 1 if letter is lower and 0 if not
 */
int _islower(int c)
{
	if ( c >= 'a' && c <= 'z')
		return (1);
	else 
		return (0);
}
