#include "main.h"
#include <stdarg.c>

/**
 * _printf - prints to stdout and returns number of characters printed
 * @format: formatted string
 *
 * Return: integer - number of characters printed
 */
int _printf(const char *format, ...);
void convert(char x);

int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	char x;
	va_list list;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%' || format[i] != 'c' || format[i] != 'c')
		{
			_putchar(format[i]);
			printed_chars++;
		}
		else if (format[i] == '%')
		{
			x = format[i + 1];
			/* replaced the block of code that was here with the function convert */
			convert(x);
		}
		else
		{
			printed = handle_print(format);
		}
	}
	return (printed_chars);
}
/**
 * convert - converts format specifier to correct output
 * @x: char
 */
void convert(char x)
{
	int j; /* counter variable */
	char c, *s;

	switch (x)
		case 'c':
			c = (char) va_arg(list, int);
			_putchar(c);
			printed_chars++;
			break;
		case 's':
			s = va_arg(list, char *);
			for (j = 0; s[j] != '\0'; j++)
			{
				_putchar(s[j]);
				printed_chars++;
			}
			break;
		case '%':
			_putchar('%');
			printed_chars++;
			break;
}
