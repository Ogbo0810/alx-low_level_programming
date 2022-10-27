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
	int n;

	n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
