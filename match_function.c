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
		{"b", _print_binary},
		{"u", _print_unsigned},
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
/**
 * 7: match_function takes a const char pointer and returns a pointer to a function. That returned function takes a va_list as argument and returns an int
 * 9-18: matching table
 * 19: index value
 * 21: go through the loop until it reaches NULL
 * 23: compare the first character of the input to the character pointed by *format
 * 24: return the pointer to the matching function if comparison is True
 * 26: return NULL if it fails
