#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* _printf.c */
int _printf(const char *format, ...);

/* print functions */
int pstr(va_list);
int pc(va_list);

/* format controller and format selector */
int controller(const char *text, va_list lf);
int selector(const char *text, va_list lf, int *a);

/* _putchar.c */
int _putchar(char);

/**
 * struct_f - Typedef struct
 *
 * @type: Format to print
 * @xf: Function to call
 **/
typedef struct ft
{
	char type;
	int (*xf)(va_list);
} fmt;


#endif
