#include "main.h"
/**
 * _print_octal - converting to octal
 *@val: the varaibles
 *Return: count after conversion
 */
int _print_octal(va_list val)
{
int e, count = 0;
int *space;

unsigned int number = va_arg(val, unsigned int);
unsigned int shrt = number;

while (number / 8 != 0)
{
number = number / 8;
count++;
}
count++;

space = malloc(sizeof(int) * count);
for (e = 0; e < count; e++)
{
space[e] = shrt % 8;
shrt = shrt / 8;
}
for (e = count - 1; e >= 0; e--)
_putchars(space[e] + '0');
free(space);
return (count);
}
