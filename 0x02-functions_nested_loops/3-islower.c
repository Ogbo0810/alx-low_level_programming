#include <unistd.h>
#include "main.h"

/**
 * _islower - checks for lowercase characters
 * @c: parameter being checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	char i;
	int result;

	result = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
			result = 1;
		}
	}
	return (result);
}
