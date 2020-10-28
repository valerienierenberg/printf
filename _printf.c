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
/* i - iterates through format string. j - iterates through struct. */
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
/* if format[i] is not '%', print value & add 1 to numprinted for each char */
		if (format[i] != '%')
		{
			_putchar(format[i]);
			numprinted++;
		}
/* if format[i] is '%', set j = 0 and add 1 to i (to get to what is after '%') */
		if (format[i] == '%')
		{
			j = 0;
			i++;
/* while the struct exists */
			while (ops[j].op)
			{
/* check for extra spaces and continue loop */
				if (format[i] == ' ')
				{
					i++;
					continue;
				}
/* if not '%', check for specifier */
				if (format[i] != '%' && format[i] == ops[j].op)
				{
/* set function pointer to whichever specifier is entered */
					f = ops[j].f;
/* Add 1 for each char printed from specifier's argument to numprinted */
					numprinted += f(args);
				}
/* if format[i] is '%', add 1 to numprinted and print '%' */
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
/* return the number of characters printed */
	return (numprinted);
}

