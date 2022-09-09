#include <stdio.h>
#include <ctype.h>

/**
 * main - main block
 * Description:  prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int a = 0;

	while (a < 10)
		putchar(a);
	putchar('\n');
	return (0);
}
