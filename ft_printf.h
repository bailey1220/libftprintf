/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 11:38:04 by bachai            #+#    #+#             */
/*   Updated: 2024/07/30 11:50:40 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>
# include <string.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
void	print_ptr(uintptr_t n, int *len);
void	print_hex(unsigned int n, int *len);
void	print_hex_upper(unsigned int n, int *len);
int		print_char(char c);
void	print_str(char *str, int *len);
void	print_unsigned(unsigned int n, int *len);
int		print_nbr(int n, int *len);

#endif