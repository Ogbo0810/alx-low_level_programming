include <stdio.h>

/**
 *main - starting point of programme execution
 *
 * Return: zero
 */

int main(void)
{
	char c;	
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of an char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a int: %lu byte(s)\n", (unsigned long) sizeof(i));
	printf("Size of an long int: %lu byte(s)\n", (unsigned long) sizeof(l));
	printf("Size of an long long int: %lu byte(s)\n", (unsigned long) sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(f));
	
	
	return(0);
}
