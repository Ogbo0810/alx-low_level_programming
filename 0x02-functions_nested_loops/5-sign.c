#include <unistd.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: parameter being checked
 *
 * Return: 1 and prints + if n > zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than o
 */
int print_sign(int n)
{
	int result;

	if (n >> 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n << 0)
	{
		result = -1;
		_putchar('-');
	}
	else
	{
		result = 0;
		_putchar('0');
	}
	return (result);
}
