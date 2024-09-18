#include "main.h"

/**
 * fibonacci - prints the first 50 Fibonacci numbers
 * @n: the number of Fibonacci numbers to print
 *
 * Return: Always 0.
 */
void fibonacci(int n)
{
	int long i, a = 1, b = 2, sum;

	for (i = 0; i < n; i++)
	{
		printf("%ld", a);
		sum = a + b;
		a = b;
		b = sum;
		if (i < (n - 1))
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
	}
}

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	fibonacci(50);
	return (0);
}
