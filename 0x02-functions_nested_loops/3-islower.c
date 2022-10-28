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
	int result;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == c)
		{
			result = 1;
		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
