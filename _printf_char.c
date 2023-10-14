#include "main.h"

/**
 * _printf_char - prints a character of char type
 * @args: argument
 * Return: 1
 */

int _printf_char(va_list args)
{
	unsigned char my_sign;

	my_sign = va_arg(args, int);
	_putchars(my_sign);
	return (1);
}
