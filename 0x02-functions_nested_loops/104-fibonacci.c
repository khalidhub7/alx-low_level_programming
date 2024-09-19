#include "main.h"

/**
 * fibo_98 - first 98 Fibonacci nums
 *
 * Return: Always 0
 */
void fibo_98(void)
{
	unsigned long int a = 1, b = 2, sum;
	int i = 0;

	for (i = 0; i < 99; i++)
	{
		printf("%lu", a);
		sum = a + b;
		a = b;
		b = sum;
		if (i < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
}

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	fibo_98();
	return (0);
}
