#ifndef HOLBERTON_H
#define HOLBERTON_H

int _printf(const char *format, ...);
int _putchar(char c);

typedef struct printf_
{
	char op;
	int (*f)(va_list);
} printf_;

void _puts(char *str);
int op_string(va_list args);
int op_char(va_list args);

#endif
