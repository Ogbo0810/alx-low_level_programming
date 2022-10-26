#include <stdio.h>

/**
 * main - starting point of programme execution
 *
 * Return: zero
 */

int main(void)
{
	char alpha;
	char beta;

	alpha = 'a';
	beta = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (beta <= 'Z')
	{
		putchar(beta);
		beta++;
	}

	putchar('\n');
	return (0);
}
