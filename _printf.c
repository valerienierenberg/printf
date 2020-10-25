#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "holberton.h"

int _printf(const char *format, ...)
{
nt print (char * str, ...)
{
va_list args;
int i = 0
int j = 0;
char buff[100]={0}, tmp[20];
char * str_arg;
  
	va_start(args, str);
	while (str && str[i])
	{
	if(str[i] == '%')
	{
	i++;

	if (str[i] == 'c')
	{
	







      switch (str[i]) {
        /* Convert char */
        case 'c': {
          buff[j] = (char)va_arg( vl, int );
          j++;
          break;
        }
        /* Convert decimal */
        case 'd': {
          _itoa(va_arg( vl, int ), tmp, 10);
          strcpy(&buff[j], tmp);
          j += strlen(tmp);
          break;
        }
        /* copy string */
        case 's': {
          str_arg = va_arg( vl, char* );
          strcpy(&buff[j], str_arg);
          j += strlen(str_arg);
          break;
        }
      }
    } else {
      buff[j] =str[i];
      j++;
    }
    i++;
  } 
  write(buff, j, 1, stdout); 
  va_end(vl);
  return j;
}
}

