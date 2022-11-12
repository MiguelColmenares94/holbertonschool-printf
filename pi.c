#include "main.h"

/**
 * pi - print a decimal
 * @argum: integer to be printed
 *
 * Return: integer printed as a string
 **/

int pi(va_list argum)
{
	char *text;
	int result;

	text = itos(va_arg(argum, int), 10);
	if (text != NULL)
	{
		for (result = 0; text[result] != '\0'; result++)
		{
			_putchar(text[result]);
		}	
	}
	else
	{
		text = "NULL";
	}
		
	
	return (result);
}
