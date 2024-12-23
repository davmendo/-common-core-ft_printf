/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davmendo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:11:24 by davmendo          #+#    #+#             */
/*   Updated: 2024/11/21 18:12:13 by davmendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		printed;
	char	c;

	printed = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		printed += ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		printed += ft_putnbr(n / 10);
	c = (n % 10) + '0';
	printed += ft_putchar(c);
	return (printed);
}
