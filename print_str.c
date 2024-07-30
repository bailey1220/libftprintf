/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:21:00 by bachai            #+#    #+#             */
/*   Updated: 2024/07/30 11:49:15 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(char c)
{
	return (write(1, &c, 1));
}

void	print_str(char *str, int *len)
{
	if (!str)
	{
		write(1, "(null)", 6);
		*len += 6;
		return ;
	}
	while (*str)
	{
		*len += write (1, &*str++, 1);
	}
}
