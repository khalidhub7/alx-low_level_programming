#include <stdio.h>

/**
 * main -entry point
 *
 * Description: print numbers of base16 in lowercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	int digit = 48; /*48; decimal rep of f*/

	while (digit <= 102) /*102; decimal rep of f*/
	{
		putchar(digit);

		/* after 9 we jump till 96; */
		if (digit == 57)
			digit += 39; /*jump(n9z) b 39 mra f ascii ok)*/
		digit++;
	}
	putchar('\n');
	return (0);
}
