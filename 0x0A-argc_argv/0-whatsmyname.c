#include <stdio.h>

/**
 * main-print the program name
 * @argc : number of argument
 * @argv: array of arguments
 * Return: 0 (success)
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
