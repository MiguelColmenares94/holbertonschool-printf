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
	int ct;

	text = itos(va_arg(argum, int), 10);
	if (text != NULL)
	{
		text = NULL;
	}
	
	for (ct = 0; text[ct] != '\0'; ct++)
	{
			_putchar(text[ct]);
	}		
	
	return (ct);
}
