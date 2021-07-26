#include "holberton.h"
#include <stdlib.h>

/**
 *_printf: prints a char
 *
 *Return: always 1
 */

int _printf(const char *format, ...)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return(1);
}

/**
 *_printf: prints a string
 *
 *Return: The number of chars printed
 */
int _printf(const char *format, ...)
{
	int count;
	char *str = va_arg(s. char *);

	if (str == NULL)
		str = "(null)";
	for (count = 0; str[count]; count++)
	{
		_putchar(str[count]);
	}
	return (count);
}
