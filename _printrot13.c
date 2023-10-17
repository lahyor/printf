#include "main.h"

/**
 * _printf_rot_13 - main function
 * @val: String pointer
 * Return: return *s
 */

int _printf_rot_13(va_list val)
{
	int k, r, love = 0;
	char *s;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] >= 'A' && s[k] <= 'z')
		{
			for (r = 0; data1[r] != '\0'; r++)
			{
				if (s[k] == data1[r])
				{
					_putchars(datarot[r]);
					love++;
					break;
				}
			}
		}
		else
		{
			_putchars(s[k]);
		}
	}
	return (love);
}
