#include "main.h"

/**
 * _printf_pointer - prints the character p
 * @args: arguments
 * Return: counter
 */

int _printf_pointer(va_list args)
{
	void *prt;
	char *stg = "(nil)";
	long int fox;
	int b;
	int i;

	prt = va_arg(args, void*);
	if (prt == NULL)
	{
		for (i = 0; stg[i] != '\0'; i++)
		{
			_putchars(stg[i]);
		}
		return (i);
	}

	fox = (unsigned long int)prt;
	_putchars('0');
	_putchars('x');
	b = _printf_hex_aux(fox);
	return (b + 2);
}
