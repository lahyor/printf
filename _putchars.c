#include "main.h"

/**
 * _putchars - writes the character to standard output
 * @sp: character to be printed
 * Return: printed character
 */

int _putchars(char sp)
{
	return (write(1, &sp, 1));
}
