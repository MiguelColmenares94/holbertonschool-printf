#include "main.h"
/**
 * pc - print char
 * @argum: argument for list
 *
 * Return: 1
 */
int pc(va_list argum)
{
	int list_item;

	list_item = va_arg(argum, int);

	_putchar(list_item);

	return (1);
}
