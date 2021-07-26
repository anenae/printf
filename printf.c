#include <unistd.h>
#include "holberton.h"
#include <stdlib.h>

/**
 *_printf: prints a char
 *
 *Return: always 1
 */
int buffer_print(char buffer[], unsigned int nb)
{
	write(1, buffer, nb);
	return (nb);
}
/**
 * buffer_add - adds a string to buffer
 * Return: if buffer filled and emptyed return number of printed char
 * else 0
 */
int buffer_add(char buffer[], char *str, unsigned int *buffer_pos)
{
	int i = 0;
	unsigned int count = 0, pos = *buffer_pos, size = BUFFER_SIZE;

	while (str && str[i])
	{
		if (pos == size)
		{
			count += buffer_print(buffer, pos);
			pos = 0;
		}
		buffer[pos++] = str[i++];
	}
	*buffer_pos = pos;
	return (count);
}
/**
 * _printf - produces output according to a format
 * @format: character string
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
