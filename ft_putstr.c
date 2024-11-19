#include "ft_printf.h"

int ft_putstr(char *s)
{
    int i;

    if (!s)
        return (ft_putstr("(null)"));
    i = 0;
    while (s[i])
    {
        ft_putchar(s[i]);
        i++;
    }
    return (i);
}
