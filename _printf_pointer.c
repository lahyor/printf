#include "main.h"

/**
 * _printf_pointer - prints the character p
 * @val: arguments
 * Return: counter
 */

int _printf_pointer(va_list val)
{
	void *pointer;
	char *code = "(nil)";
	long int point_index;
	int b, i;

	pointer = va_arg(val, void*);
	if (pointer == NULL)
	{
		for (i = 0; code[i] != '\0'; i++)
		{
			_putchars(code[i]);
		}
		return (i);
	}

	point_index = (unsigned long int)pointer;
	_putchars('0');
	_putchars('x');
	b = _printf_hex_aux(point_index);
	return (b + 2);
}
