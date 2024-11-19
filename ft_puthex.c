#include "ft_printf.h"
/*
int ft_puthex(unsigned int n, char format)
{
    int printed;
    char *base;

    base = (format == 'x') ? "0123456789abcdef" : "0123456789ABCDEF";
    printed = 0;
    if (n >= 16)
        printed += ft_puthex(n / 16, format);
    printed += ft_putchar(base[n % 16]);
    return (printed);
}
*/

int ft_puthex(unsigned long long n, char format)
{
    int printed;
    char *base;

    base = (format == 'x') ? "0123456789abcdef" : "0123456789ABCDEF";
    printed = 0;
    if (n >= 16)
        printed += ft_puthex(n / 16, format);
    printed += ft_putchar(base[n % 16]);
    return (printed);
}
