#include "src.h"

static const t_option tab[] = {
        {"s", &my_printf_s},
        {"c", &my_printf_c},
        {"i", &my_printf_i},
        {"d", &my_printf_d},
        {"o", &my_printf_o},
        {"u", &my_printf_u},
        {"x", &my_printf_x},
        {"X", &my_printf_X},
        {"b", &my_printf_b},
        {NULL, NULL}
};

int         my_printf(char * opt, ...)
{
    int     i;
    int     j;
    char    * pChar;
    va_list listarg;

    i = 0;
    va_start    (listarg, opt);
    pChar = malloc(sizeof(char) * 2);
    pChar[1] = '\0';
    while (opt[i] != '\0')
    {
        j = 0;
        if (opt[i] == '%')
        {
            ((opt[i + 1]) == '%')? my_putchar('%') : 0;
            i++;
            pChar[0] = opt[i];
            while (tab[j].str != NULL)
            {
              (my_strcmp(tab[j].str, pChar) == 0)? tab[j].ptrfun(listarg) : 0;
               j++;
            }
        }
        else
            my_putchar(opt[i]);
        i++;
    }
    va_end(listarg);
    free(pChar);
    return 0;
}
