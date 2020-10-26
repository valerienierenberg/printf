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
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}

/**
* op_div- returns division of two integers
* @a: first integer
* @b: second integer
* Return: result of division of a by b
*/
int op_div(int a, int b)
{
return (a / b);
}

/**
* op_mod- returns remainder of divivsion of two integers
* @a: first integer
* @b: second integer
* Return: remainder of division of a by b
*/
int op_mod(int a, int b)
{
return (a % b);
}
