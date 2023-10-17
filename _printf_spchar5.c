#include "main.h"

/**
 * print_spchar5 - printing string
 * @val:this holds the value of the hexas
 * Return:return len at the end
 */

int print_spchar5(va_list val)
{
	char *e;
	int k, len = 0;
	int quant;

	e = va_arg(val, char *);
	if (e == NULL)
		e = "(null)";
	for (k = 0, e[k] != '\0' k++)
	{
		if (e[k] < 32 || e[k] >= 127)
		{
			_putchars('\\');
			_putchars('x');
			len = len + 2;
			quant = e[k];
			if (quant < 16)
			{
				_putchars('0');
				len++;
			}
			len = len + _printf_HEXA2(quant);
		}
		else
		{
			_putchars(e[k]);
			len++;
		}
	}
	return (len);
}
