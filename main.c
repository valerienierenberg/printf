
#include <limits.h>
#include <stdio.h>
#include "holberton.h"
/**                                  
 * main - Entry point                         
 *                                  
 * Return: Always 0                          
 */
int main(void)
{
    int len2;
    int len;

  len = _printf("Let's try to printf a simple sentence.\n");
  len2 = printf("Let's try to printf a simple sentence.\n");
  _printf("Length:[%d, %i]\n", len, len);
  printf("Length:[%d, %i]\n", len2, len2);
 _printf("Character:[%c]\n", 'H');
  printf("Character:[%c]\n", 'H');
 _printf("String:[%s]\n", "I am a string !");
  printf("String:[%s]\n", "I am a string !");

/* _printf("Reversed String:[%r]\n", "I am a string !"); */
/*  printf("Reversed String:[%r]\n", "I am a string !"); */
  return (0);
}


