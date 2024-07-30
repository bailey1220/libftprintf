/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:46:52 by bachai            #+#    #+#             */
/*   Updated: 2024/07/30 11:37:15 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_checker(char c, va_list arg, int *len)
{
	if (c == 'c')
		*len += print_char(va_arg(arg, int));
	else if (c == 's')
		print_str(va_arg(arg, char *), len);
	else if (c == 'p')
		print_ptr(va_arg(arg, uintptr_t), len);
	else if (c == 'd' || c == 'i')
		print_nbr(va_arg(arg, int), len);
	else if (c == 'u')
		print_unsigned(va_arg(arg, unsigned int), len);
	else if (c == 'x')
		print_hex(va_arg(arg, unsigned int), len);
	else if (c == 'X')
		print_hex_upper(va_arg(arg, unsigned int), len);
	else if (c == '%')
		*len += print_char('%');
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			print_checker(str[i], arg, &len);
		}
		else
			len += print_char(str[i]);
		i++;
	}
	va_end(arg);
	return (len);
}
