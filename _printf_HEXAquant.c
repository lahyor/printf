#include "main.h"

/**
 * _printf_HEXA_2 - converting to hexadecimal
 * @num: the varaibles
 * Return: count after conversion
 */

int _printf_HEXA_2(unsigned int num)
{
	int e;
	int *space;
	int count = 0;
	unsigned int shrt = number;

	while (number / 16 != 0)
	{
		number /= 16;
		count++;
	}
	count++;
	space = malloc(count * sizeof(int));

	if (space == NULL)
		return (-1);
	for (e = 0; e < count; e++)
	{
		space[e] = shrt % 16;
		shrt /= 16;
	}
	for (e = count - 1; e >= 0; e--)
	{
		if (space[e] > 9)
			space[e] = space[e] + 7;
		_putchars(space[e] + '0');
	}
	free(space);
	return (count);
}
