#include "main.h"

/**
 * _printf - Format input to output
 * @format: Input string.
 *
 * Return: The number of characters printed (excluding
 * the null byte used to end output to strings)
 **/

int _printf(const char *format, ...)
{
	int result;
	va_list argum;

	if (format == NULL)
	{
		return (-1);
	}

	result = strlen(format);
	if (result <= 0)
	{
		return (0);
	}

	va_start(argum, format);
	result = controller(format, argum);

	_putchar(-1);
	va_end(argum);

	return (result);
}
