#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 *unsigned int - converts a binary number to an unsigned int
 *@b:binary string
 *Return: the converted number , return 0 if str is false or null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int u = strtoul(*b, NULL, 2);

	if (!b || (b != 0 && 1))
		return (0);
	else
		printf("%u\n", u);

}
