#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

#include <math.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 *struct func_load - a struct to select right functions
 *@form: the specifier
 *function_call - the function loader
 *
 *Description: a struct to load the required function
 */




typedef struct func_load
{
	char *form;
	int (*a)(va_list, char *, unsigned int);
} create;



int print_binary(va_list va, char *buff, unsigned int buff_length);
int print_string(va_list va, char *buff, unsigned int buff_length);
int print_char(va_list va, char *buff, unsigned int buff_length);
int print_int(va_list va, char *buff, unsigned int buff_length);
int buff_print(char *buff, unsigned int bf);
unsigned int buff_add(char *buff, char chr, unsigned int buff_length);
int _printf(const char *format, ...);
int (*select_func(const char *s, int indexing))(va_list, char *, unsigned int);



#endif/*MAIN_H*/
