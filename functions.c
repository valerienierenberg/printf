#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"
#include <stddef.h>
/**
* print_string- prints string variable to stdout
* @a: character
* Return: void
*/
int op_string(va_list args)
{
	char *s = va_arg(args, int);
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!*s)
                return (-1);

		_putchar(s[i]);
	}
	_putchar('\n');
return(0);
}

/**
* op_div- returns division of two integers
* @a: first integer
* @b: second integer
* Return: result of division of a by b
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
