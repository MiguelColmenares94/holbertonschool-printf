#include "main.h"

/**
 * pi - print a decimal
 * @argum: integer to be printed
 *
 * Return: integer printed as a string
 **/
char* pi(va_list argum)
{
	char itos[50];

	sprintf(itos, "%d", va_arg(argum, int));

	if (itos != NULL)
	{
		return (*itos);
	}
	else
	{
		return ("NULL");
	}

}
