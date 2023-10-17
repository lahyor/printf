#include "main.h"

/**
 * printrot_13 - main function
 * @val: String pointer
 * Return: return *s
 */

int printrot_13(va_list val)
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
		for (r = 0; r < data1[r]; r++)
		{
			if (s[k] == data1[r])
			{
				_putchars(datarot[r]);
				love++;
				break;
			}
		}
	}
	return (love);
}
