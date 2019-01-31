#include "src.h"

void       my_printf_s(va_list listarg)
{
    char * fd;

    fd = va_arg(listarg, char *);
    my_putstr(fd);
}

void        my_printf_c(va_list listarg)
{
    int     fd;

    fd = va_arg(listarg, int);
    my_putchar(fd);
}

void        my_printf_i(va_list listarg)
{
    int     fd;

    fd = va_arg(listarg, int);
    my_put_nbr(fd);
}

void        my_printf_d(va_list listarg)
{
    int     fd;

    fd = va_arg(listarg, int);
    my_put_nbr(fd);
}