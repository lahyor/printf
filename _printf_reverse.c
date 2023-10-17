#include "main.h"
/**
 *printrev - function that prints in reverse form
 * @val: this keeps track of our loop
 * e: the counter holding the value of the loop
 * Return: results in a reversed form
 */
int printrev(va_list val)
{
	char *e = va_arg(val, char*);
	int i;
	int k = 0;

while (e[k] != '\0')
	k++;
for (i = k - 1; i >= 0; i--)
_putchars(e[i]);
return (k);
}
