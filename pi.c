#include "main.h"

/**
 * pi - print a decimal
 * @argum: integer to be printed
 *
 * Return: integer printed as a string
 **/
int pi(va_list argum)
{
	char itos[50];
	int result;

	sprintf(itos, "%d", va_arg(argum, int));

	if (itos != NULL)
	{
		result = itos;
	}
	else
	{
		result = NULL;
	}

	return (result);
}
