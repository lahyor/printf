#include "main.h"

/**
 * _printf_modifier - handle length modifiers
 * @val: arguments
 * @length_modifier: the modifiers l and h
 * Return: Nothing
 */

int _printf_modifier(va_list val, char length_modifier)
{
	int num;

	if (length_modifier == 'l')
	{
		long num = va_arg(val, long);
	}
	else if (length_modifier == 'h')
	{
		short num = (short)va_arg(val, int);
	}
	else
	{
		num = va_arg = va_arg(val, int);
	}
}
