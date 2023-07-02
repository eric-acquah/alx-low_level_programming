#ifndef VAR_ARG
#define VAR_ARG
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

#endif
