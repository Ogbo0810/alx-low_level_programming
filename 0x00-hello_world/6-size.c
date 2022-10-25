include <stdio.h>

/**
 *main - starting point of programme execution
 *
 * Return: zero
 */

int main(void)
{
	int i;
	float f;
	long l;
	short s;
	char c;

	printf("Size of an integer: %lu bytes\n", (unsigned long) sizeof(i));
	printf("Size of a float: %lu bytes\n", (unsigned long) sizeof(f));
	printf("Size of an long: %lu bytes\n", (unsigned long) sizeof(l));
	printf("Size of an short: %lu bytes\n", (unsigned long) sizeof(s));
	printf("Size of a char: %lu bytes\n", (unsigned long) sizeof(c));
	
	
	return(0);
}
