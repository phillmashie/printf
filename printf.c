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
	int i, printed = 0, printed_chars = 0;

	if (fomart == NULL)
		return (-1);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (fomart[i] != '%'|| format[i] != 'c' || fomart[i] != 'c')
		{
			printed_chars++;
		}
		else
		{
			printed = handle_print(format);
		}
	}
	return (printed_chars);
}
/* declaring variables */
/* looping through the formatted string */
/* condition for when the loop encounters the % sign */
/* if % sign is enco, check the character next to it (if s[i] == %, check s[i] + 1 */
/* check if the next character is either c, s, or % */
/* Switch or if statement */
/* s: s = va_arg(list, char *) */
/*c: c = (char) va_arg(list, int) */
/*%: as itself */
