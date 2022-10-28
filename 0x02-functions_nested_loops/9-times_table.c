#include <unistd.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int m1, m2, r;

	for (m1 = 0; m1 <= 9; m1++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (m2 = 1; m2 <= 9; m2++)
		{
			r = (m1 * m2);
			if ((r / 10) > 0)
			{
				_putchar((r / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((r % 10) + '0');

			if (m2 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
