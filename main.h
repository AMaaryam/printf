#include <stdarg.h>
#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H

int _printf(const char *format, ...);
int _strlen(char *s);

int spIndex(char ch, struct sp_char *p);

int signIndex(char ch, struct signs *p);

int _putchar(char sp_ch);

int _putstr(char *str, int len);

void _putInt(unsigned int num, int *pCount);

int print_str(va_list pa, int *pCount);

int print_ch(va_list pa, int *pCount);

int print_int(va_list pa, int *pCount);

int print_bi(va_list pa, int *pCount);

int print_rev(va_list pa, int *pCount);

int print_unsigned(va_list pa, int *pCount);

int print_octal(va_list pa, int *pCount);

int print_lowerhex(va_list pa, int *pCount);

int print_upperhex(va_list pa, int *pCount);

int print_nonch(va_list pa, int *pCount);

int print_rot13(va_list pa, int *pCount);

int print_addr(va_list pa, int *pCount);

void postive_sign(int flag, char ch, int j, va_list ap, int *pCount);

void space_sign(int flag, char ch, int j, va_list ap, int *pCount);

void window_sign(int flag, char ch, int j, va_list ap, int *pCount);

#endif /*MAIN_H*/
