#include "src.h"

int         my_putnbr_base(int n, char *base)
{
    int     len;

    len = my_strlen(base);

    if (n < 0)
    {
        my_putchar('-');
        n = n * -1;
    }
    if (n == 0)
        return (0);
    else
        my_putnbr_base(n / len, base);
    my_putchar(base[n % len]);
    return (0);

}

unsigned int my_put_nbr_unsigned(unsigned int n)
{
    if (n < 10)
        my_putchar(n + '0');
    else
    {
        my_put_nbr_unsigned(n / 10);
        my_putchar(n % 10 + '0');
    }
    return (0);
}