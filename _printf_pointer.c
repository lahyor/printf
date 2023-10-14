#include "main.h"

/**
 * _printf_pointer - prints the character p
 * @args: arguments
 * Return: counter
 */

int _printf_pointer(va_list args)
{
	void *l;
	char *w = "(nil)";
	long int x;
	int i, j;

	l = va_arg(args, void*);
	if (l == NULL)
	{
		for (j = 0; w[j] != '\0'; j++)
		{
			_putchars(w[j]);
		}
		return (j);
	}

	x = (unsigned long int)l;
	_putchars('0');
	_putchars('x');
	i = _printf_hex_aux(x);
	return (i + 2);
}
