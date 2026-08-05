#include "main.h"

/**
 * match_function - selects the correct function to apply the right specifier
 * @format: operator passed as argument to the program
 * Return: pointer to the function that match to specifier given as parameter
 */

int (*match_function(const char *format))(va_list)
{
	specifier_t spec[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{"d", _print_decimal},
		{"i", _print_decimal},
		{NULL, NULL}
	};

	int i;

	for (i = 0; spec[i].specifier != NULL; i++)
	{
		if (spec[i].specifier[0] == *format)
			return (spec[i].f);
	}

	return (NULL);
}
