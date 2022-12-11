#include <stdio.h>

/**
 * main - starting point of programme execution
 *
 * Return: zero
 */

int main(void)
{
	int f, s;

	for (f = '0'; f < '9'; f++)
	{
		for (s = f + 1; s <= '9'; s++)
		{
			if (s != f)
			{
				putchar(f);
				putchar(s);

				if (f == '8' && s == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
