include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of tines _ should be printed
 */
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		_putchar('_');
		a++;
	}
	_putchar('\n');
}
