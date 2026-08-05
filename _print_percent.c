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
