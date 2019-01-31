#include "src.h"

void            my_printf_o(va_list listarg)
{
    int         fd;

    fd = va_arg(listarg, int);
    my_putnbr_base(fd, "01234567");
}

void             my_printf_u(va_list listarg)
{
    unsigned int fd;

    fd = va_arg(listarg, unsigned long int);
    my_putnbr_base(my_put_nbr_unsigned(fd), "0123456789");
}

void            my_printf_x(va_list listarg)
{
    int         fd;

    fd = va_arg(listarg, int);
    my_putnbr_base(fd, "0123456789abcdef");
}

void            my_printf_X(va_list listarg)
{
    int         fd;

    fd = va_arg(listarg, int);
    my_putnbr_base(fd, "0123456789ABCDEF");
}

void            my_printf_b(va_list listarg)
{
    int         fd;

    fd = va_arg(listarg, int);
    my_putnbr_base(fd, "01");
}