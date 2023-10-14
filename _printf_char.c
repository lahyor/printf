#include "main.h"

/**
 * seun_printf_char - prints a character of char type
 * @args: argument
 * Return: 1
 */

int seun_printf_char(va_list args)
{
	unsigned char my_sign;

	my_sign = va_arg(args, int);
	_putchars(my_sign);
	return (1);
}
