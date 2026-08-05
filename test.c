#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
   	int len2;

	len = _printf("%d\n", INT_MIN);
	len2 = printf("%d\n", INT_MIN);
	_printf("my len: %d\n", len);
	printf("real len: %d\n", len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	_printf("%d\n", 0);
	printf("%d\n", 0);
	_printf("%d\n", 1);
	printf("%d\n", 1);
	_printf("%d\n", -1);
	printf("%d\n", -1);
	_printf("%d\n", INT_MAX);
	printf("%d\n", INT_MAX);
	_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);
	_printf("%i\n", 0);
	printf("%i\n", 0);
	_printf("%i\n", -123456);
	printf("%i\n", -123456);
	_printf("Test: %d %i %d\n", 42, -42, 0);
	printf("Test: %d %i %d\n", 42, -42, 0);
	_printf("%d %d %d\n", -1, -2, -3);
	printf("%d %d %d\n", -1, -2, -3);
	len = _printf("[%]\n");
	_printf("count = %d\n\n", len);
	len = _printf("abc%\n");
	_printf("count = %d\n\n", len);
	len = _printf("%q\n");
	_printf("count = %d\n\n", len);
	len = _printf("%");
	_printf("count = %d\n", len);
	len = _printf("");
	_printf("\n[empty] count=%d\n", len);
	len = _printf("%%");
	_printf("\n[double percent] count=%d\n", len);
	len = _printf("%s", NULL);
	_printf("\n[null string] count=%d\n", len);
	len = _printf("%c", '\0');
	_printf("\n[null char] count=%d\n", len);
	return (0);
}
