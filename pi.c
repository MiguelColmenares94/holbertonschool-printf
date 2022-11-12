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
	int result[50], counter;

	sprintf(itos, "%d", va_arg(argum, int));

	if (itos != NULL)
	{
		for (counter = 0; itos[counter] != '\0'; counter++)
		{
			result[counter] == itos[counter];
		}
	}
	else
	{
		result = NULL;
	}

	return (result);
}
