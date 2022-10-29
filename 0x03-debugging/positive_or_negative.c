#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - function that prints if integer is positive or negative
 *
 * Return: zero
 */

void positive_or_negative(int i)
{

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
