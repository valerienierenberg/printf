#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"
#include <stddef.h>
/**
* print_string- prints string variable to stdout
* @args: variable list of arguments
* Return: void
*/
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}

/**
* op_char- prints a char
* @args: variable list of arguments
* Return: integer
*/

int op_char(va_list args)
{
	char c = va_arg(args, int);

	if (!c)
		return (-1);
	else
	{
		_putchar(c);
		return (0);
	}
}

