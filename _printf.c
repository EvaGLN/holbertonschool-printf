#include "main.h"
/**
 * _printf - Write a function that produces output according to a format.
 * @format: input format
 * Return: number of char printed without '\0'
 */
int _printf(const char *format, ...)
{
	va_list args;
	int (*f)(va_list);
	int count = 0;
	int i = 0;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			f = match_function(&format[i + 1]);
			if (f != NULL)
			{
				count += f(args);
				i += 2;
			}
			else
			{
				write(1, &format[i], 1);
				count++;
				i++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			count++;
			i++;
		}
	}
	va_end(args);
	return (count);
}
/**
 * 7: function that takes a const char pointer and return an int
 * 9: liste des arguments
 * 10: *f is a pointer to a function that takes a va list as argument and return an int
 * 11: counter
 * 12: index
 * 14: if format NULL, no need to continue so return -1 and leave
 * 16: init variadic list
 * 17: go through loop until it returns '\0'
 * 19: if format match a conversion sign
 * 21: f is assigned to the adress of function (returned by match_function) which has analysed the next character
 * 22: if (inside if) format is different than NULL then add the value returned by function f and move forward index by 2 to pass the conversion sign and the specifier
 * 27: else (inside if) format is '\0' or a specifier unrecognized by the the matching table, add one to the counter for the character read and move forward index by 1
 * 34: else format doesn't match a conversion sign, add one to the counter for the character read and move forward index by 1
 * 41: end and clean va_list
 * 42: total count returned
