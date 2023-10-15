#include "main.h"

/**
 * _printf_hex_aux - prints hexadecimal number
 * @fox: arguments
 * Return: counter
 */

int _printf_hex_aux(unsigned long int fox)
{
	int count = 0;
	int few_counts[20];
	int x;

	if (fox == 0)
	{
		_putchars('0');
		return (1);
	}

	while (fox != 0 && count < 20)
	{
		few_counts[count] = fox % 16;
		fox /= 16;
		count++;
	}
	x = count - 1;
	for (; x >= 0; x--)
	{
		if (few_counts[x] > 9)
			_putchars('a' + few_counts[x] - 10);
		else
		{
			_putchars('0' + few_counts[x]);
		}
	}
	return (count);
}
