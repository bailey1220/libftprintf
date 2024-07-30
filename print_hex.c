/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:58:04 by bachai            #+#    #+#             */
/*   Updated: 2024/07/30 11:51:51 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_hex_upper(unsigned int n, int *len)
{
	char	*str;

	str = "0123456789ABCDEF";
	if (n >= 16)
	{
		print_hex_upper(n / 16, len);
		print_hex_upper(n % 16, len);
	}
	else
	{
		*len += write(1, &str[n], 1);
	}
}

void	print_hex(unsigned int n, int *len)
{
	char	*str;

	str = "0123456789abcdef";
	if (n >= 16)
	{
		print_hex(n / 16, len);
		print_hex(n % 16, len);
	}
	else
	{
		*len += write(1, &str[n], 1);
	}
}

void	ptr_hex(uintptr_t n, int *len)
{
	char	*str;

	str = "0123456789abcdef";
	if (n >= 16)
	{
		ptr_hex(n / 16, len);
		ptr_hex(n % 16, len);
	}
	else
	{
		*len += write(1, &str[n], 1);
	}
}

void	print_ptr(uintptr_t n, int *len)
{
	*len += print_char('0');
	*len += print_char('x');
	ptr_hex(n, len);
}
