#include "main.h"
/**
 * _printf_int - main function
 * @args: parameter
 * Return: always 0
 */

int _printf_int(va_list args)
{
	int e = va_arg(args,  int);
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
	_putchars(final + '0');
	return (i);
}
