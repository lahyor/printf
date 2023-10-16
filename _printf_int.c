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

/**
 * _printf_decimal - prints decimal
 * @args: arguments
 * Return: printed decimal
 */

int _printf_decimal(va_list args)
{
	int d = va_arg(args, int);
	int len, rem = d % 10, lose;
	int v = 1;
	int ven = 1;

	d = d / 10;
	len = d;

	if (rem < 0)
	{
		_putchars('-');
		len = -len;
		d = -d;
		rem = -rem;
		v++;
	}
	if (len > 0)
	{
		while (len / 10 != 0)
		{
			ven = ven * 10;
			len = len / 10;
		}
		len = d;
		while (ven > 0)
		{
			lose = len / ven;
			_putchars(lose + '0');
			len = len - (lose * ven);
			ven = ven / 10;
			v++;
		}
	}
	_putchars(rem + '0');
	return (v);
}
