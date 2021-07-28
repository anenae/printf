Skip to content
Search or jump to…

Pull requests
Issues
Marketplace
Explore
 
@anenae 
musangisilvia
/
printf
1
01
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
printf/holberton.h
@musangisilvia
musangisilvia make us get 65
Latest commit d72dab3 on 17 Mar
 History
 2 contributors
@muindetuva@musangisilvia
37 lines (33 sloc)  943 Bytes
  
#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>

/**
  *struct directives - holds fromat specifiers and their functions.
  *@spec: char.
  *@fspec: function pointer.
  *
  */
typedef struct directives
{
	char spec;
	int (*fspec)(va_list, int);
} forms;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_print_func(char c))(va_list, int);
int print_ch(va_list, int);
int print_str(va_list, int);
int print_int(va_list, int);
int _putchar_int(int, int);
int print_numbers(unsigned long n, unsigned int base, const char *digits);
unsigned int find_length(unsigned int, int);
int print_hex(va_list args, int len);
int print_heX(va_list args, int len);
int print_unsignd(va_list args, int len);
int print_octal(va_list args, int len);
int print_rot13(va_list args, int len);
int print_b(va_list args, int len);
int print_binary(unsigned int, int);
int print_Str(va_list args, int len);

#endif
© 2021 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Loading complete{"mode":"full","isActive":false}
