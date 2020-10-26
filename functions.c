#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"
#include <stddef.h>
/**
* op_string - prints string variable to stdout
* @args: variable list of arguments
* Return: 0
*/
int op_string(va_list args)
{
	int i;
	char *s = va_arg(args, char *);

	if (!s)
		return (-1);
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
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

	_putchar(c);
	return (1);
}
