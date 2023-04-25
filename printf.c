#include "main.h"
#include <stdarg.c>

/**
 * _printf - prints to stdout and returns number of characters printed
 * @format: formatted string
 *
 * Return: integer - number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, j, printed = 0, printed_chars = 0;
	char c, x;
	char *s;

	if (format == NULL)
		return (-1);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%' || format[i] != 'c' || format[i] != 'c')
		{
			printed_chars++;
		}
		else if (format[i] == '%')
		{
			x = format[i + 1];
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
				case '%'
					_putchar('%');
					printed_chars++;
					break;
		}
		else
		{
			printed = handle_print(format);
		}
	}
	return (printed_chars);
}
