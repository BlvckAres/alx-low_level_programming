#include <stdio>

/**
 * main - Entry point
 *
 * Return: Always(0)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	float d;
	char f;
	
	printf("Size of a char: %lu byte(s)\n",(unsigned long)sizeof(f));
	printf("Size of a int: %lu byte(s)\n",(unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n",(unsigned long)sizeof(b));
	printf("Size of long long int: %lu byte(s)\n",(unsigned long)sizeof(c));
	printf("Size of float: %lu byte(s)\n",(unsigned long)sizeof(d));
	return(0);
}
