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
