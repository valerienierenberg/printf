#include "holberton.h"
#include <stdint.h>
#include <stdarg.h>
#include <stdio.h>
int op_digit(va_list args)
{
	int count = 0;
	int n = va_arg(args, char *);
/* If number is smaller than 0, put a - sign and change number to positive */
    if (n < 0)
	{ 
        putchar('-');
		count++;
        n = -n; 
    } 
/* Remove the last digit and recur */
if (n > 0)
{
/* Print the last digit */
    putchar(n % 10 + '0');
	count++;

	if (n / 10)
	n /= 10;
	putchar(n);
}
return (count);
}

