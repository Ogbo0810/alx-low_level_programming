#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: integer to start count from
 *
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n > 9)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar(n);
		}

		if (n < 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
}
