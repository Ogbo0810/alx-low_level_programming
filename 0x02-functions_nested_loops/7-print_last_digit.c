#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: parameter being checked
 *
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{		
		last = (n * (-1));
	}
	else
	{
		last = n;
	}
	return (last % 10);
}
