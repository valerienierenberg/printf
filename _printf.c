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

_printf ops[] = {
	{'c', op_char},
	{'s', op_string},
	{'%', op_mod},
	{'d', op_digit},
	{'i', op_int},
	{'\0', NULL}
};

while (format)
{
for (; i < numprinted; numprinted++)
{
	if (format[i] == "%")
	{
		i++;
		if (format[i] == 's')
			op_string(args);
		else if (format[i] == 'c')
			op_char(args);
		else if (format[i] == 'd')
			op_digit(args);
		else if (format[i] == 'i')
			op_int(args);
		else if (format[i] == '\0')
			return (NULL);
	}
}
i++;
}
return (numprinted);
}
