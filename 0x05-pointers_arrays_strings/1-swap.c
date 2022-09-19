#include "main.h"

/**
 * swap_int - is a function that
 * swaps two integers
 * @*a - first input pointer
 * @*b - second input pointer
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
