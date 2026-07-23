#include "main.h"
/**
 * _print_char - prints a character
 * @args: arguments
 * Return: number of characters printed
 */
int _print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	write(1, &c, 1);
	return (1);
}
/**
 * 7: function that takes a list of arguments and return an int
 * 9: local variable to store the character extracted from args
 * 11: extraction of args received as int but implicitly converted in char as c is char
 * 12: write the character
 * 	1 = file descriptor for stdout
 * 	&c = address of variable c because write expect a pointer to the value
 * 	1 = number of bytes to write
 * 13: count returned. Here 1 as only 1 character written
 * 	this is returned to _printf.c, added to total counter of characters printed
 * va_arg is alone here as wa_start & va_end are in _printf.c
