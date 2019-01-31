#include "src.h"

void    my_putchar(char c)
{
    write(1, &c, 1);
}

void    my_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        my_putchar(str[i]);
        i++;
    }
}

void    my_put_nbr(int nb)
{
    if (nb > 9)
        my_put_nbr(nb / 10);
    else if (nb < 0)
    {
        my_putchar('-');
        nb = nb * 1;
    }
    my_putchar(nb % 10 + '0');
}

int     my_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'))
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

int     my_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        i = i + 1;
    }
    return (i);
}