#include "main.h"

/**
 * _print_char - prints a character
 * @args: arguments
 * Return: number of characters printed
 */

int _print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);

	return (1);
}
