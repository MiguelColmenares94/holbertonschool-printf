#include "main.h"

/**
 * pstr - Print string
 * @argum: list
 *
 * Return: String length.
 */

int pstr(va_list argum)
{
	char *s;

	s = va_arg(argum, char*);
	if (s != NULL)
	{
		return (p(s));
	}
	else
	{
		return (p("(NULL)"));
	}

}
