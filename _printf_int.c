#include "main.h"

/**
 * _printf_int - main function
 * @args: parameter
 * Return: always 0
 */

int _printf_int(va_list args)
{
	int rem[33], i = 0, len = 0;
	int num = va_arg(args, int);

	if (num < 0)
	{
		_putchars('-');
		num = -num;
		i++;
	}
	if (num > 9)
	{
		while (num != 0)
		{
			rem[len] = num % 10;
			num = num / 10;
			len++;
		}
		while (len > 0)
		{
			_putchars(rem[len - 1] + '0');
			i++;
			len--;
		}
	}
	else
	{
		_putchars(num % 10 + '0');
		i = 1;
	}
	return (i);
}
