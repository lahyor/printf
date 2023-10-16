#include "main.h"

/**
 * _printf_int - main function
 * @args: parameter
 * Return: always 0
 */

int _printf_int(va_list args)
{
	int num, final, i, number, e, expt = 0, ben;

	e = va_arg(args, int);
	if (e != 0)
	{
		if (e < 0)
		{
			_putchars('-');
			expt++;
		}
		ben = e;
		num = 0;
		while (ben != 0)
		{
			ben /= 10;
			num++;
		}
		final = 1;
		for (i = 1; i <= num - 1; i++)
			final *= 10;
		for (i = 1; i <= num; i++)
		{
			number = e / final;
			if (e < 0)
				_putchars((number * -1) + 48);
			else
				_putchars(number + '0');
			expt++;
			e -= number * final;
			final /= 10;
		}
	}
	else
	{
		_putchars('0');
		return (1);
	}
	return (expt);
}
