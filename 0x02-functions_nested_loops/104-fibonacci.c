#include "main.h"

/**
 * fibo_98 - first 98 Fibonacci nums
 *
 * Return: void
 */
void fibo_98(void)
{
	unsigned long int a1 = 1, b1 = 2, sum1 = 0;
	unsigned long int a2 = 1, b2 = 2, sum2 = 0;
	int i;

	printf("%lu, %lu", a1, b1);
	for (i = 0; i < 96; i++)
	{
		sum1 = a1 + b1;
		sum2 = (sum1 < a1 ? 1 : 0) + a2 + b2;

		if (sum1 < a1)
		{
			sum2 += 1;
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
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fibo_98();
	return (0);
}
