#include "main.h"
/**
 * prime_factor - prints the largest prime factor
 * @n: num to factor
 * Return: Always 0
 */
void prime_factor(unsigned long int n)
{
	unsigned long int i;

	for (i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	if (n > 1)
	{
		printf("%lu\n", n);
	}
}

/**
 * main - check the code
 * Return: Always 0.
 */
int main(void)
{
	prime_factor(612852475143);
	return (0);
}
