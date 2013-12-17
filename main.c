/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrault <abrault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 16:21:18 by abrault           #+#    #+#             */
/*   Updated: 2013/12/17 16:32:26 by abrault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int		main(void)
{
	ft_printf("Chaine	: %s\n", "Robert");
	ft_printf("Int	: %d\n", 42);
	ft_printf("Char	: %c\n", 'M');
	return (0);
}
