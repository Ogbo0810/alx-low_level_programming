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
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (c == lower)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
