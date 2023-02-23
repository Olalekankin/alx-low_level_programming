#ifndef MAIN_H
#define MAIN_H

int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
int _putchar(char);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);

#endif

vi _putchar

#include <unistd.h>

/**
*_putchar - write the character c to stdout
*@c:The character to print
*Return 1 if true, 0 if false
*On error, -1 return.
*/
int_putchar(char c)
{
return (write(1, &c, 1));
}
