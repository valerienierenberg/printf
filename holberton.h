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
int op_char(va_list one);
int op_string(va_list two);
int op_mod(va_list three);
int op_digit(va_list four);
int op_int(va_list five);

#endif
