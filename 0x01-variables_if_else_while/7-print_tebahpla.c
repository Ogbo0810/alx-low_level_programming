#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - starting point of programme execution
 *
 * Return: zero
 */

int main(void)
{
	char alpha;

	alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	putchar('\n');
	return (0);
}
