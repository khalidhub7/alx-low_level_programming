#include <unistd.h>

/**
 * _putchar - print 1 char
 * @c: char to print
 * Return: success 1.
 */
int _putchar(char c);
{
	return (write(1, &c, 1));
}
