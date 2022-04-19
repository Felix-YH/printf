#include "main.h"

/**
 * print_char - prints character
 * @list:list of parameters
 * Return: number of characters printed
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string -print a string
 * @list: lsit of parameters
 * Return: characters printed
 */

int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(NULL)";

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_percent - a function that print %
 * @list: number of parameters
 * Return: 1 Always
 */

int print_percent(__attribute__((unused))va_list list)
{
	char p = '%';

	_putchar(p);
	return (1);
}
