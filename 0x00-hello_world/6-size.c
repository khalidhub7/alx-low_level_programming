#include <stdio>

/**
 * main -entry point
 *
 * description: c program that prints the various types using sizeof
 *
 * Return:0 (success)
*/
int main(void)
{
	printf("size of char: % zu bytes\n", sizeof(char));
	printf("Size of an int: % zu bytes\n", sizeof(int));
	printf("Size of a long int: % zu bytes\n", sizeof(long int));
	printf("Size of a long long int: % zu bytes\n", sizeof(long long int));
	printf("size of a float: % zu bytes\n", sizeof(float));
	return (0);
}
