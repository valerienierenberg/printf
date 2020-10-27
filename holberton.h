#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
/**
 * struct printf_ - printf struct
 * @op: char format specifier
 * @f: function pointer
 * description: printf struct
 */
typedef struct printf_
{
	char op;
	int (*f)(va_list);
} printf_;

int op_string(va_list args);
int op_char(va_list args);
int op_digit(va_list args);
int op_int(va_list args);

#endif
