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
	int n = va_arg(args, char *); /* set variable arguments to type int */

	if (n < 0) /* argument is negative */
	{
		_putchar('-');
		count++;
/* change the number to char type (a) so that we can use putchar later */
		a = ('0' - (n % 10));
		n /= -10; /* get the next digit over to the left */
	}
/* Here, the argument is zero or a positive number */
	else
=======
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
/* loops through the number getting one digit over to the left each time */
	while (n > 0)
	while (n > 0) /* loop thru argument moving one place to left each time */
	{
		b = b * 10 + (n % 10);
		n /= 10;
	}

/* this loop prints each digit backwards from left to right (_putchar (c))*/
	while (b > 0)
	while (b > 0) /* loop to print each digit (c), from left to right */
	{
		c = ((b % 10) + '0');
		_putchar(c);
		count++;
		b /= 10;
	}
/* print right-most digit of argument */
	_putchar(a);
	count++;
	return (count);
	_putchar(a); /* print-right most digit */
	count++;

	return (count); /* = chars printed, now added to numprinted in _printf */
}
