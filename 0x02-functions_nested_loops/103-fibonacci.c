#include "main.h"

/**
 * fibo_2 - computes and prints the sum of even Fibonacci numbers
 *           not exceeding 4,000,000
 *
 * Return: Always 0.
 */
void fibo_2(void)
{
	long int a = 1, b = 2, sum = 0, even_sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			even_sum += a;
		}
		sum = a + b;
		a = b;
		b = sum;
	}
	printf("%ld\n", even_sum);
}

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fibo_2();
	return (0);
}
