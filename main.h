#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

int _putchars(char sp);
int _printf(const char *format, ...);
int _printf_char(va_list args);
int _printf_string(va_list args);
int _printf_percent(void);
int _printf_binary(va_list args);
int _printf_int(va_list args);
int _printf_pointer(va_list val);
int _printf_hex_aux(unsigned long int lens);
int printf_unsint(va_list args);
int _print_octal(va_list val);
int _print_hexa(va_list val);
int _print_HEXA(va_list val);
int _printf_rev(va_list val);
int _printf_rot_13(va_list val);
int _printf_HEXA2(unsigned int num);
int print_spchar5(va_list val);

/**
 * struct form_types - struct format types
 * @identifier: conversion specifier
 * @p: function pointer
 */
typedef struct form_types
{
	char *identifier;
	int (*p)(va_list args);
} p_code;

#endif
