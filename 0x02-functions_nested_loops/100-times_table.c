#include "main.h"

/**
 * print_times_table - Print the n times table, starting with 0.
 * Description: If `n` is greater than 15 or less than 0, print nothing.
 * @n: number
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (a = 0; a <= n; a++)
	{	_putchar('0');
		for (b = 1; b <= n; b++)
		{
			c = a * b;
			if (c > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c / 100 + '0');
				_putchar(c / 10 % 10 + '0');
				_putchar(c % 10 + '0')	
			}
			else if (c > 9 && c <= 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0')
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(c / 100 + '0');
				_putchar(c / 10 % 10 + '0');
				_putchar(c % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
