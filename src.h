#ifndef __SRC_H__
# define __SRC_H__

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

typedef struct      s_option
{
    char            *str;
    void            (*ptrfun)();
}                   t_option;

void                my_putchar(char c);
void                my_putstr(char *str);
void                my_put_nbr(int nb);
int                 my_strcmp(char *s1, char *s2);
int                 my_strlen(char *str);
int                 my_putnbr_base(int n, char *base);
unsigned int        my_put_nbr_unsigned(unsigned int n);
int                 my_printf(char * opt, ...);
void                my_printf_s(va_list listarg);
void                my_printf_c(va_list listarg);
void                my_printf_i(va_list listarg);
void                my_printf_d(va_list listarg);
void                my_printf_o(va_list listarg);
void                my_printf_u(va_list listarg);
void                my_printf_x(va_list listarg);
void                my_printf_X(va_list listarg);
void                my_printf_b(va_list listarg);

#endif
