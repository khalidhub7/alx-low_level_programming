#include "main.h"

/**
 * fibo_98 - prints the first 98 Fibonacci numbers
 *
 * Return: void
 */
void fibo_98(void)
{
	unsigned long int a1 = 1, b1 = 2, sum1;
	unsigned long int a2 = 0, b2 = 0, sum2;
	int i;

	printf("%lu, %lu", a1, b1);

	for (i = 2; i < 98; i++)
	{
		sum1 = a1 + b1;
		sum2 = a2 + b2;
		while (sum1 < a1)
		{
			sum2 += 1;
			/* which is like 4,294,967,295 in 32-bit system */
			sum1 += 4294967296UL;
		}

		a1 = b1;
		a2 = b2;
		b1 = sum1;
		b2 = sum2;

		if (a2 > 0)
			printf(", %lu%018lu", b2, b1);
		else
			printf(", %lu", b1);
	}
	printf("\n");
}

/**
 * main - checks the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fibo_98();
	return (0);
}
