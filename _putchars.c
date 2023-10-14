#include "main.h"
#include <unistd.h>

/**
 * _putchars - writes the character c to stdout
 * @sp: The character to print
 * Return: On success 1.
 */
int _putchars(char sp)
{
	return (write(1, &sp, 1));
}
