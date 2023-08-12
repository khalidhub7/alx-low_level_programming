#include <stdio.h>

/**
 * main -entry point
 *
 * description: c program that prints the various types using sizeof
 *
 * Return:0 (success)
*/
int main(void)
{
	printf("size of char: %u bytes\n", sizeof(char));
	printf("Size of an int: %u bytes\n", sizeof(int));
	printf("Size of a long int: %u bytes\n", sizeof(long int));
	printf("Size of a long long int: %u bytes\n", sizeof(long long int));
	printf("size of a float: %u bytes\n", sizeof(float));
	return (0);
}
