#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme
 *
 * Return: Always 0
 */
int main(void)
{
	int sum = 0;
	char ch;

	srand(time(NULL));
	while (sum < 2645)
	{
		ch = rand() % 128;
		if (ch > 32 && ch < 127)
		{
			sum += ch;
			putchar(ch);
		}
	}
	putchar(2772 - sum);
	return (0);
}
