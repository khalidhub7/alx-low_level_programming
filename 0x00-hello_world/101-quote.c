#include <unistd.h>

/**
 * main -entry point
 *
 * Description: a C program that prints exactly ... without printf and put
 *
 * Return: (1) (success)
 *
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
