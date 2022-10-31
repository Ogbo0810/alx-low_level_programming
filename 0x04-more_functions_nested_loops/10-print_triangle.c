#include "main.h"

/**
* print_triangle - prints a triangle
* @size: size of the triangle
*
* Return: void
*/

void print_triangle(int size)
{
	int i, k, p, n, m, u;

	n = size;
	m = size;
	u = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}

	if (!(n <= 0))
	{
		for (i = 1; i <= n; i++)
		{
/*			for (j = 1; j <= m; j++)*/
/*			{*/
				for (k = 1; k <= (m - u); k++)
				{
				_putchar(' ');
				}
				for (p = 1; p <= (m - (m - u)); p++)
				{
				_putchar('#');
				}
/*			}*/
			_putchar('\n');
			u++;
		}
	}
}
