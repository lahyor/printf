#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

int _putchars(char sp);
int _put(char *str);
int _printf(const char *format, ...);
int _printf_char(va_list args);
int _printf_string(va_list args);
int _printf_percent(void);
int _printf_binary(va_list args);

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
