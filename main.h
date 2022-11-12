#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

/* _printf.c */
int _printf(const char *format, ...);

/* print format functions */
int pstr(va_list);
int pc(va_list);
int pi(va_list argum);

/* integer to string */
char *itoa(long int num, int base);

/* format controller and format selector */
int controller(const char *text, va_list lf);
int selector(const char *text, va_list lf, int *a);

/* spf.c */
int _putchar(char);
int p(char *text);
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
