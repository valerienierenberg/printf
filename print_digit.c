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
	int count = 0;
	char a;
	int b;
	char c;
<<<<<<< HEAD
	int n = va_arg(args, char *);
	int z = 0;
=======
	int n = va_arg(args, char *); /* set type of variable arguments to int */
>>>>>>> e81fdcdf3c1c6c63d21659c2571f3608e41b75a7

	if (n < 0) /* argument is negative */
	{
		_putchar('-');
		count++; /* add to count each time a character is printed */
		a = ('0' - (n % 10)); /* assign last digit to a (char type) */
		n /= -10; /* move over one digit (place) to the left */
	}
	else /* argument is zero or positive */
	{
		a = ((n % 10) + '0'); /* assign last digit to a (char type) */
		n /= 10; /*move over one digit (place) to the left */
	}
	b = 0;
	while (n > 0) /* loop thru argument moving one place to left each time */
	{
		if (n % 10 == 0)
			z++;
		b = b * 10 + (n % 10);
		n /= 10;
	}

	while (b > 0) /* loop to print each digit (c), from left to right */
	{
		c = ((b % 10) + '0');
		_putchar(c);
		count++;
		b /= 10;
	}
<<<<<<< HEAD
	for (; z != 0; z--)
		_putchar('0');
	_putchar(a);
=======
	_putchar(a); /* print-right most digit */
>>>>>>> e81fdcdf3c1c6c63d21659c2571f3608e41b75a7
	count++;

	return (count); /* = chars printed, now added to numprinted in _printf */
}
