#include "main.h"

/**
 * swap_int - is a function that
 * swaps two integers
 * @a - takes an integer a
 * @b - takes an integer b
 *
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
