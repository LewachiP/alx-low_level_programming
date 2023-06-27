#include "main.h"

/**
 * swap_int - takes in two variable intergers and swaps them
 * @author Anisah
 * @a: swaps and stores the answer in b
 * @b swaps and stores the answer in a
 * Return: 0
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
