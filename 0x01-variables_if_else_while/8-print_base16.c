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
	char hex;

	n = '0';
	hex = 'a';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}

	putchar('\n');
	return (0);
}
