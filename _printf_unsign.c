#include "main.h"

/**
 * _printf_binary - unsigned int argument is converted to binary
 * @args: arguments in decimal
 * Return: number of characters printed
 */

int _printf_binary(va_list args)
{
	unsigned int men, total, v, number, s, calc;
	int sum_count = 0;

	s = va_arg(args, unsigned int);
	if (s != 0)
	{
		calc = s;
		men = 0;

		while (calc != 0)
		{
			calc /= 2;
			men++;
		}
		total = 1;
		for (v = 1; v <= men - 1; v++)
			total *= 2;
		for (v = 1; v <= men; v++)
		{
			number = s / total;
			_putchars(number + '0');
			sum_count++;
			s -= number * total;
			total /= 2;
		}
	}
	else
	{
		_putchars('0');
		return (1);
	}
	return (sum_count);
}
