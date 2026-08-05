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
