#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
<<<<<<< HEAD
nt print (char * str, ...)
{
va_list args;
int i = 0
int j = 0;
char * str_arg;

	va_start(args, str);
	while (str && str[i])
	{
	if(str[i] == '%')
	{
	i++;
	if (str[i] == 'c')
	{



=======
>>>>>>> 6c8f70de6d489a4c1c7829a973958de131ce67bc

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


