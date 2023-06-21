#include "main.h"

/**
 * print_alphabets - prints alphabets in lowercase followed by a new line
 */
void print_alphabet(void)
{
	char la;
	for (la = 'a'; la <= 'z'; la++)
		_putchsr(la);

	_putchar('\n');
}
