#include "main.h"

/**
 * controller - Controller of format
 * @text: Text to be formated
 * @lf: List of format
 *
 * Return: Result
 **/

int controller(const char *text, va_list lf)
{
	int result, a, spr;

	result = 0;
	a = 0;
	while (text[a] != 0)
	{
		if (text[a] == '%')
		{
			spr = selector(text, lf, &a);
			if (spr == -1)
				return (-1);

			result = result + spr;
			continue;
		}

		_putchar(text[a]);
		result = result + 1;
		a++;
	}

	return (result);
}
