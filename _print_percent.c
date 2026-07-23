#include "main.h"
/**
 * _print_percent - prints a percent sign
 * @args: arguments
 * Return: number of characters printed
 */
int _print_percent(va_list args)
{
	(void)args;
	write(1, "%", 1);
	return (1);
}
/**
 * 7: function that takes a list of arguments and return an int
 * 9: as args is unused, (void) indicates that it's intentional and suppress the alert of unused argument
 * 10:write the character
 * 	1 = file descriptor for stdout
 * 	"%" = write accepts directly a string as value
 * 	1 = number of bytes to write
 * 13: count returned. Here 1 as only 1 character written
 * 	this is returned to _printf.c, added to tal counter of characters printed
 * va_arg is alone here as va_start & va_end are in _printf.c
