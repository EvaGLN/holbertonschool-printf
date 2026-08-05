#include "main.h"

/**
 * _print_decimal - prints a decimal
 * @args: arguments
 * Return: number of characters printed
 */

int _print_decimal(va_list args)
{
	int integer = va_arg(args, int), count = 0;
	unsigned int unsinteger, div = 1;
	char c;
	
	if (integer == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else if (integer < 0)
	{
		write(1, "-", 1);
		count++;
		unsinteger = -(unsigned int)integer;
	}
	else
		unsinteger = (unsigned int)integer;

	while ((unsinteger / div) >= 10)
		div *= 10;

	while (div > 0)
	{
		c = (unsinteger / div) + '0';
		write(1, &c, 1);
		count++;
		unsinteger %= div;
		div /= 10;
	}

	return (count);
}
