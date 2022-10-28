#include <unistd.h>
#include "main.h"

/**
 * main - starting point of programme execution
 *
 * Return: zero
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}

/**
 * _putchar - It prints a word.
 * @c: only operand
 *
 * Description: This prints the only arcgument inside it
 * Return: the parameter
 */
int _putchar(char c)
{
		return (write(1, &c, 1));
}


