#include <unistd.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: parameter being checked
 *
 * Return: the absolute value
 */
int _abs(int n)
{

	if (n < 0)
	{
		n = ((-1) * n);
	}
	else if (n == 0)
	{
		n = 0;
	}
	return (n);
}
