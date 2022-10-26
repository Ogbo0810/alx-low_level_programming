#include <stdio.h>

/**
 * main - starting point of programme execution
 *
 * Return: zero
 */

int main(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	putchar('\n');
	return (0);
}
