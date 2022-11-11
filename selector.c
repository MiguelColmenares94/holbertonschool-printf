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
	int result, c, select_f;
	fmt fmtl[] = {
		{'s', pstr}, {'c', pc}
	};

	*a = *a + 1;

	if (text[*a] == '\0')
		return (-1);

	if (text[*a] == '%')
	{
		_putchar('%');
		return (1);
	}

	select_f = sizeof(fmtl) / sizeof(fmtl[0]);
	for (result = c = 0; c < select_f; c++)
	{
		if (text[*a] == fmtl[c].type)
		{
			result = fmtl[c].f(lf);
			return (result);
		}

	}

	_putchar('%'), _putchar(text[*a]);

	return (2);
}
