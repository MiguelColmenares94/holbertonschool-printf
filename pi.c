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
		result = p(text);
	}
	else
	{
		text = "NULL";
	}
		
	
	return (result);
}
