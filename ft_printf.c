/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 15:48:09 by abrault           #+#    #+#             */
/*   Updated: 2013/12/17 16:20:48 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

void		ft_putnbr(int n)
{
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + 48);
}

int		ft_printf(const char *str, ...)
{
	va_list ap;

	if (!str)
		return (0);
	va_start(ap, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (*str  == 's')
				ft_putstr(va_arg(ap, char*));
			else if (*str == 'd')
				ft_putnbr(va_arg(ap, int));
			else if (*str == 'c')
				write(1, str, 1);
		}
		else
			write(1, str, 1);
		str++;
	}
	va_end(ap);
	return (0);
}
