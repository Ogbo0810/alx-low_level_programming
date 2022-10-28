#include <unistd.h>
#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int m1, m2;

	for (m1 = 0; m1 <= 9; m1++)
	{
		for (m2 = 0; m2 <= 9; m2++)
		{
			if ((m1 * m2) > 9)
			{
			_putchar(((m1 * m2) / 10) + '0');	
			_putchar(((m1 * m2) % 10) + '0');
			}
			else
			{
				_putchar((m1 * m2) + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
