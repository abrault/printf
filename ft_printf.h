/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 15:58:04 by abrault           #+#    #+#             */
/*   Updated: 2013/12/17 17:12:03 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_PRINTF_H
# define	ft_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

void		ft_putnbr(int n);
void		ft_putstr(const char *str);
void		ft_putchar(const char c);
int			ft_printf(const char *str, ...);

#endif
