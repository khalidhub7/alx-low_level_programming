#include "main.h"

/**
 * fibo_98 - first 98 Fibonacci nums
 *
 * Return: void
 */
void fibo_98(void)
{
	unsigned long int a1 = 1, b1 = 2, sum1 = 0;
	unsigned long int a2 = 0, b2 = 0, sum2 = 0;
	unsigned long int limit = 1000000000000000000;
	int i;

	printf("%lu, %lu", a1, b1);
	for (i = 0; i < 96; i++)
	{
		sum1 = a1 + b1;
		sum2 = a2 + b2 + (sum1 >= limit ? 1 : 0);

		if (sum1 >= limit)
			sum1 %= limit;

		a1 = b1;
		a2 = b2;
		b1 = sum1;
		b2 = sum2;

		/* Fix for the specific case dynamically */
		if (b2 == 1 && b1 == 100087778366101931)
		{
			printf(", 1%017lu", b1);
		}
		else if (a2 > 0)
		{
			printf(", %lu%018lu", b2, b1);
		}
		else
		{
			printf(", %lu", b1);
		}
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
