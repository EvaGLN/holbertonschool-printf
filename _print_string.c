#include "main.h"
/**
 * _print_string - prints a string
 * @args: arguments
 * Return: number of characters printed
 */
int _print_string(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);
	return (i);
}
/**
 * 7: function that takes a list of arguments and return an int
 * 9: local variable to store the string extracted from args
 * 10: local variable as index and counter
 * 12: extraction of args and stays char because a pointer is not converted
 * 13/14: if string is NULL then str becomes "(null)" and can be processed
 * 15: go through the loop until it reaches '\0'
 * 16: write the character
 * 	1 = file descriptor for stdout
 * 	&str[i] = address of i in string because write expect a pointer to the value
 * 	1 = number of bytes to write
 * 17: count returned. Here i as i is an index and a counter
 * 	this is returned to _printf.c, added to total counter of characters printed
 * va_arg is alone here as va_start & va_end are in _printf.c
