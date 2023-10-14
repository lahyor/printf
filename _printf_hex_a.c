#include "main.h"

/**
 * _printf_hex_aux - prints hexadecimal number
 * @fox: arguments
 * Return: counter
 */

int _printf_hex_aux(unsigned long int fox)
{
	long int v;
	long int *few_counts;
	long int count = 0;
	unsigned long int len = fox;

	while (fox / 16 != 0)
	{
		fox /= 16;
		count++;
	}
	count++;
	few_counts = malloc(count * sizeof(long int));

	for (v = 0; v < count; v++)
	{
		few_counts[v] = len % 16;
		len /= 16;
	}
	for (v = count - 1; v >= 0; v--)
	{
		if (few_counts[v] > 9)
			few_counts[v] = few_counts[v] + 39;
		_putchars(few_counts[v] + '0');
	}
	free(few_counts);
	return (count);
}
