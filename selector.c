#include "main.h"

/**
 * selector - Select format
 * @text: Text to be formated
 * @lf: Format list
 * @a: Counter
 *
 * Return: Size of the numbers of elements printed
 **/

int selector(const char *text, va_list lf, int *a)
{
	int result, c;

	fmt fmtl[] = {
		{'s', pstr}, {'c', pc},
		{'d', pi}, {'i', pi}
	};

	*a = *a + 1;

	if (text[*a] == '\0')
	{
		return (-1);
	}

	if (text[*a] == '%')
	{
		_putchar('%');
		return (1);
	}

	for (result = c = 0; fmtl[c].type; c++)
	{
		if (text[*a] == fmtl[c].type)
		{
			result = fmtl[c].xf(lf);
			return (result);
		}

	}

	_putchar('%'), _putchar(text[*a]);

	return (2);
}
