/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 13:59:27 by bachai            #+#    #+#             */
/*   Updated: 2024/07/30 11:47:21 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_nbr(int n, int *len)
{
	if (n == -2147483648)
	{
		*len += write(1, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		*len += write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		print_nbr(n / 10, len);
		print_nbr(n % 10, len);
	}
	else
	{
		n += '0';
		*len += write (1, &n, 1);
	}
	return (0);
}

void	print_unsigned(unsigned int n, int *len)
{
	if (n >= 10)
	{
		print_nbr(n / 10, len);
		print_nbr(n % 10, len);
	}
	else
	{
		n += '0';
		*len += write (1, &n, 1);
	}
}
