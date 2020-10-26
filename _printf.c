#include "holberton.h"
/**
* _printf- prints anything to stdout
* @format: format string (char pointer)
* Return: number of characters printed to stdout
*/
int _printf(const char *format, ...)
{
va_list args;
int numprinted, j = 0, i = 0;
int (*f)(va_list);

printf_ ops[] = {
	{'c', op_char},
	{'s', op_string},
/*
*	{'%', op_mod},
*	{'d', op_digit},
*	{'i', op_int},
*/
	{'\0', NULL}
};
while (ops[j].op)
{
	while (format != NULL && format[i] != '\0')
	{
		va_start(args, format);
		if (format[i] != '%')
		{
			_putchar(format[i]);
			numprinted++;
		}
		if (format[i] == '%')
		{
			i++;
			if (format[i] != '%')
			{
				f = ops[j].f;
				numprinted = f(args);
				numprinted++;
			}
			if (format[i] == '%')
			{
				numprinted++;
				_putchar('%');
			}
		}
		i++;
	}
	j++;
	va_end(args);
}
return (numprinted);
}

