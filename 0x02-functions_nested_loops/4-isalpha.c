#include <unistd.h>
#include "main.h"

/**
 * _isalpha - checks for alpabetic characters
 * @c: parameter being checked
 *
 * Return: 1 if c is letter, 0 otherwise
 */
int _isalpha(int c)
{
	char i;
	char j;
	int result;

	result = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (i == c || j == c)
			{
				result = 1;
			}
		}
	}
	return (result);
}
