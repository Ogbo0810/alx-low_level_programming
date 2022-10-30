#include "main.h"

/**
* print_line - prints 10 times the numbers, from 0 to 14
* @n: number of underscores to print per line
*
* Return: void
*/

void print_line(int n)
{
	int i;

/*	if (n <= 0)
*	{
*		_putchar('\n');
*	}
*/
	if (!(n <= 0))
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
