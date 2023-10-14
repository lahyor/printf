#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <stdarg.h>

int _putchars(char sp);
int seun_printf(const char *format, ...);
int seun_printf_char(va_list args);
int seun_printf_string(va_list args);
int seun_strlen(char *p);
int seun_printf_percent(void);
int seun_strlenc(const char *p);

/**
 * struct form_types - struct format types
 * @identifier: conversion specifier
 * @p: function pointer
 */
typedef struct form_types
{
	char *is;
	int (*p)(va_list args);
} p_code;

#endif
