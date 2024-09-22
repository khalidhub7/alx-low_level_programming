#include "main.h"
/**
 * fizz_buzz - fizz_buzz
 * Return: Always 0
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		if (i < 100)
			printf(" ");
		if (i == 100)
			printf("\n");
	}
}
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
