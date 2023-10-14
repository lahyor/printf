#include "main.h"

/**
 * _printf_hex_aux - prints hexadecimal number
 * @fox: arguments
 * Return: counter
 */

int _printf_hex_aux(unsigned long int fox)
{
	long int s;
	long int *arr;
	long int count = 0;
	unsigned long int temp = fox;

	while (fox / 16 != 0)
	{
		fox /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int));

	for (s = 0; s < count; s++)
	{
		arr[s] = temp % 16;
		temp /= 16;
	}
	for (s = count - 1; s >= 0; s--)
	{
		if (arr[s] > 9)
			arr[s] = arr[s] + 39;
		_putchars(arr[s] + '0');
	}
	free(arr);
	return (count);
}
