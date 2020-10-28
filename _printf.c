#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "holberton.h"
/**
* _printf- prints anything to stdout
* @format: format string (char pointer)
* Return: number of characters printed to stdout
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int numprinted = 0;
	int j = 0;
	int (*f)(va_list);

/* struct */
	printf_ ops[] = {
		{'s', op_string},
		{'c', op_char},
		{'d', op_digit},
		{'i', op_int},
		{'\0', NULL}
	};
/* checking to first see if format is NULL and if so, returning -1 */
	if (format == NULL)
		return (-1);
/* if format[i] does not equal null byte, enter the first while loop */
	va_start(args, format);
	while (format != NULL && format[i] != '\0')
	{
/* if format[i] is not '%', print '%' and move to the next int or char */
		if (format[i] != '%')
		{
			_putchar(format[i]);
			numprinted++;
		}
/* if format[i] is '%', set j = 0 and iterate on */
		if (format[i] == '%')
		{
			j = 0;
			i++;
/* while the struct exists */
			while (ops[j].op)
			{
				if (format[i] == ' ')
				{
					i++;
					continue;
				}
				if (format[i] != '%' && format[i] == ops[j].op)
				{
					f = ops[j].f;
					numprinted += f(args);
				}
				if (format[i] == '%')
				{
					numprinted++;
					_putchar('%');
				}
				j++;
			}
		}
	i++;
	}

	va_end(args);
	return (numprinted);
}

