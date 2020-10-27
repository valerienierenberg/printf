#include "holberton.h"
#include <stdint.h>
#include <stdarg.h>
#include <stdio.h>
int op_unsigned(va_list args)
{
	int count = 0;
        char a;
        int b;
        char c;
        int n = va_arg(args, char *);

        if (n < 0)
                return (0);

        else
        {
                a = ((n % 10) + '0');
                n /= -10;
        }
        
        b = 0;
        while (n > 0)
        {
                b = b * 10 + (n % 10);
                n /= 10;
        }

        while (b > 0)
        {
                c = ((b % 10) + '0');
                _putchar(c);
                count++;
                b /= 10;
        }
        _putchar(a);
        count++;

return (count);
}

