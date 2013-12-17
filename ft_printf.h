/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/16 15:58:04 by abrault           #+#    #+#             */
/*   Updated: 2013/12/17 16:17:13 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		FT_PRINTF_H
# define	ft_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

void		ft_putnbr(int n);
int			ft_printf(const char *str, ...);

#endif
