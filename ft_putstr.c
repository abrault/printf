/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 13:34:25 by abrault           #+#    #+#             */
/*   Updated: 2013/12/17 17:11:30 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str)
{
	int		i;

	i = 0;
	if (str == NULL)
		return ;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
