#include "main.h"

/**
 * _hex_str - convert a number from base 10 to hex
 * @n: number to be converted
 * @hex: base 16
 * @alpha: char 'A' to 'F' or 'a' to 'f'
 *
 * Return: number of chars print
 */

int _hex_str(unsigned int n, unsigned int hex, char alpha)
{
	unsigned int a = n % hex;
	unsigned int b = n / hex;
	char c;

	if (a > 10)
		c = (a - 10) + alpha;
	else
		c = a + '0';

	if (b == 0)
		return (_putchar(c));

	if (b < hex)
	{
		if (b > 10)
			return (_putchar(b - 10 + alpha) + _putchar(c));
		return (_putchar(b + '0') + _putchar(c));
	}
	return (_hex_str(b, hex, alpha) + _putchar(c));

}

/**
 * _hex_u - print upper hex
 * @list: argument recieved
 *
 * Return: hex printed
 */

int _hex_u(va_list list)
{
	return (_hex_str(va_arg(list, unsigned int), 16, 'A'));

}

/**
 * _hex_1- print lower hex
 * @list: argument recieved
 *
 * Return: hex printed
 */

int _hex_1(va_list list)
{
	return (_hex_str(va_arg(list, unsigned int), 16, 'a'));

}

/**
 * print_r - print string in reverse
 * @list: list to increment
 *
 * Return: number of characters printed
 */

int print_r(va_list list)
{
	char *s = va_arg(list, char *);
	int i, c;

	if (s == NULL)
		s = ")llun(";
	i = 0;
	while (s[i])
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
		c++;
	}
	return (i);
}
