#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: Always 0
 */
int _atoi(char *s)
{
	int i = 0, j = 0, sign = 1, num = 0;

	while (s[j] != '\0')
	{
		if (s[j] == ' ')
			j++;
		else if (s[j] == '-')
		{
			sign *= -1;
			j++;
		}
		else if (s[j] == '+')
			j++;
		else
			break;
	}
	while (s[i] != '\0')
	{
		if (isdigit(s[i]))
		{
			/* Handle overflow */
			if (num > (2147483647 - (s[i] - '0')) / 10)
				return (sign == 1 ? 2147483647 : -2147483648);
			/* make room of other number hhh */
			num = num * 10 + (s[i] - '0');
			if (!isdigit(s[i + 1]))
				break;
		}
		i++;
	}
	return (num * sign);
}
