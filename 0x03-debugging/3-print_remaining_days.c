#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	int y;

	y = year;

	if (y % 4 == 0 || (y % 400 == 0 && !(y % 100 == 0)))
	{
		if (month >= 2)
		{
			day++;
		}

			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, y);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}

/*
* CHECKING IF A YEAR IS A LEAP YEAR
* Check divisibility by 4: must be divisible by 4
* Check divisibility by 100:
* A: if divisible by 4 and not by 100, then it is leap
* B: if divisible by 4 & 100,
* then it must be divisible by 400 to be a leap year
*/
