#include "holberton.h"
#include <stdint.h>
#include <stdarg.h>
#include <stdio.h>
/**
* op_digit- prints a digit
* @args: variable argument list
* Return: count
*/
int op_digit(va_list args)
{
	char a;
	int b;
	char c;
	int n = va_arg(args, char *);

	if (n == NULL)
		n = "(null)";

	if (n < 0)
	{
		_putchar('-');
		a = ('0' - (n % 10));
		n /= -10;
	}
	else
	{
		a = ((n % 10) + '0');
		n /= 10;
	}
	b = 0;
	while (n > 0)
	{
		b = b * 10 + (n % 10);
		n /= 10;
	}

	while (b > 0)
	{
		c = ((b % 10) + '0');
		_putchar(c);
		b /= 10;
	}
	_putchar(a);

return (0);
}

