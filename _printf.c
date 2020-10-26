#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "holberton.h"

int _printf(const char *format, ...)
{

va_list args;
int i = 0;
int numprinted = 0;
char *s;
int j = 0;
int (*f)(va_list);

printf_ ops[] = {
	{'c', op_char},
	{'s', op_string},
	{'%', op_mod},
	{'d', op_digit},
	{'i', op_int},
	{'\0', NULL}
};

while (j < 5)
{

	while (format)
	{
		va_start(args, format);
		for (; i < numprinted; numprinted++)
		{
			if (format[i] == '%')
			{
				i++;
				if (format[i] == 'c')
				{
					(int)ops[i].f = va_arg(args, int);
					_putchar(i);
				}
				else if (format[i] == 's')
				{
					s = va_arg(args, char *);
					_puts(s);
				}
				else if (format[i] == '\0')
					return (0);
			}
		}
		i++;
	}
	j++;
	va_end(args);
}
return (numprinted);
}
