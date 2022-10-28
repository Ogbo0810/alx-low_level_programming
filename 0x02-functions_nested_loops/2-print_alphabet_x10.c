#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j <= 10; j++)
	{
		print_alphabet();
	}
}

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
