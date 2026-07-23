#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

typedef struct specifier
{
	const char *specifier;
	int (*f)(va_list);
} specifier_t;

int _printf(const char *format, ...);

int (*match_function(const char *format))(va_list);

int _print_char(va_list args);

int _print_string(va_list args);

int _print_percent(va_list args);

int _print_decimal(va_list args);

#endif
