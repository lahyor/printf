#include "main.h"
#include <unistd.h>

/**
 * printf_unsint - function that priints integers
 * @args: set of arguments to be printed
 * Return: sum of the characters printed at the end
 */

int printf_unsint(va_list args)
{
	unsigned int e = va_arg(args,  unsigned int);
	int num, final = e % 10, number, expt = 1;
	int i = 1;

	e = e / 10;
	num = e;
	if (final < 0)
	{
		_putchars('_');
		num = -num;
		e = -e;
		final = -final;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			expt = expt * 10;
			num = num / 10;
		}
		num = e;
		while (expt > 0)
		{
			number = num / expt;
			_putchars(number + '0');
			num = num - (number * expt);
			expt = expt / 10;
			i++;
		}
	}
	_putchars(final + '0');
	return (i);
}
