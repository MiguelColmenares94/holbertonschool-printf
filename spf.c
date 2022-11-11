#include "main.h"

/**
 * p - print char
 * @text: string to be printed
 *
 * Return: lenght of string
 */

int p(char *text)
{
	int a;

	a = 0;
	while (text[a] != '\0')
	{
		_putchar(text[a]);
	
	}
	++a;
	return (a);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
