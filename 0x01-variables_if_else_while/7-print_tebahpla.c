#include <stdio.h>
#include <ctype.h>

/**
 * main - main block
 * Description: prints the lowercase alphabet in reverse.
 * Return: 0
 */
int main(void)
{
	int letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
