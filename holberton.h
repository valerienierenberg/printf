#ifndef HOLBERTON_H
#define HOLBERTON_H

int _printf(const char *format, ...);
int _putchar(char c);

typedef struct printf_
{
	char *op;
	int (*f)(va_list);
} printf_;


#endif
