#include <stdio.h>

/**
 * main - starting point of programme execution
 *
 * Return: zero
 */

int main(void)
{
	int f, s, t;

	for (f = '0'; f < '9'; f++)
	{
		for (s = f + 1; s <= '9'; s++)
		{
			for (t = s + 1; t <= '9'; t++)
			{
				if ((s != f) != t)
				{
					putchar(f);
					putchar(s);
					putchar(t);

					if (f == '7' && s == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
