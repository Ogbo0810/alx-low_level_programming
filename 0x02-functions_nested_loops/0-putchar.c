#include <unistd.h>
#include "main.h"

/**
 * main - starting point of programme execution
 * Description: It prints the word _putchar, followed by a new line.
 * Return: zero
 */
int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i<8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');

	return (0);
}

int _putchar(char c)
{
		return (write(1, &c, 1));
}
