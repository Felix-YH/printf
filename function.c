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

**
 * print_integer - prints integers
 * @list: list to integers
 *
 * Return: integers
 */

int print_integer(va_list list)
{
	int n[10];
	int f, d, t, y, i;

	t = va_arg(list, int);
	i = 0;
	d = 1000000000;
	n[0] = t / d;

	for (f = 1; f < 10; f++)
	{
		d /= 10;
		n[f] = (t / d) % 10;
	}
	if (t < 0)
	{
		_putchar('-');
		i++;
		for (f = 0; f < 10; f++)
			n[f] *= -1;
	}
	for (f = 0, y = 0; f < 10; f++)
	{
		y += n[f];
		if (y != 0 || f == 9)
		{
			_putchar('0' + n[f]);
			i++;
		}
	}
	return (i);
}


/**
 * print_decimal - prints decimal
 * @list: list to decimal
 *
 * Return: integers
 */

int print_decimal(va_list list)
{
	int n[10];
	int f, d, t, y, i;

	t = va_arg(list, int);
	i = 0;
	d = 1000000000;
	n[0] = t / d;

	for (f = 1; f < 10; f++)
	{
		d /= 10;
		n[f] = (t / d) % 10;
	}
	if (t < 0)
	{
		_putchar('-');
		i++;
		for (f = 0; f < 10; f++)
			n[f] *= -1;
	}
	for (f = 0, y = 0; f < 10; f++)
	{
		y += n[f];
		if (y != 0 || f == 9)
		{
			_putchar('0' + n[f]);
			i++;
		}
	}
	return (i);
}
