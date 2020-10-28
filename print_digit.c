#include "holberton.h"
#include <stdint.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * op_int- prints an integer
 * @args: variable argument list
 * Return: count
 */
int op_int(va_list args)
{
	int count = 0, b[32], i;
	char a, c;
	int n = va_arg(args, char *); /* set type of variable arguments to int */
	int f = 0;

	if (n < 0) /* argument is negative */
	{
		_putchar('-');
		count++; /* add to count each time a character is printed */
		if (n == -2147483648)
		{
			f = 1;
			a = ('0' - (n % 10)); /* assign last digit to a (char type) */
			n /= -10; /* move over one digit (place) to the left */
		}
		else
			(n = n * -1);
	}
	for (i = 0; n > 0; i++) /* loop thru argument moving one place to left each time */
	{
		b[i] = (n % 10);
		n /= 10;
	}
	b[i] = 100;
	for (i = 0; b[i] < 10; i++)
	{
		c = b[i] + '0';
		_putchar(c);
		count++;
	}
	if (f == 1)
	{
		_putchar(a);
		count++;
	}
	return (count); /* = chars printed, now added to numprinted in _printf */
}
