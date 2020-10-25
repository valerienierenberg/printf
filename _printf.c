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

_printf ops[] = {
	{'c', op_char},
	{'s', op_string},
	{'%', op_mod},
	{'d', op_digit},
	{'i', op_int},
	{'\0', NULL}
};

