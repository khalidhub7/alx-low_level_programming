#include "main.h"

/**
 * add -  numbers
 *
 * Return: Always 0 (Success)
 * Description: prints all natural numbers from n to 98
 * @n: arg
 */

void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n < 98; n++)
        {
            _putchar(n / 10 + '0');  /* Print the tens place */
            _putchar(n % 10 + '0');  /* Print the units place */
            if (n < 97)
            {
                _putchar(',');  /* Print comma */
                _putchar(' ');  /* Print space */
            }
        }
    }
    else
    {
        for (; n > 98; n--)
        {
            _putchar(n / 100 + '0'); /* Print the hundreds place */
            _putchar((n % 100) / 10 + '0');  /* Print the tens place */
            _putchar(n % 10 + '0');  /* Print the units place */
            if (n > 99)
            {
                _putchar(',');  /* Print comma */
                _putchar(' ');  /* Print space */
            }
        }
    }
    _putchar('9');  /* Print 9 */
    _putchar('8'); /* Print 8 */
    _putchar('\n');  /* Print newline */
}
