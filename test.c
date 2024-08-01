/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bachai <bachai@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 12:47:03 by bachai            #+#    #+#             */
/*   Updated: 2024/08/01 13:56:47 by bachai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	char	*ptr;

	ptr = "Hello";
	printf("ft_printf: %d\n",
		ft_printf("Hello %c, %s, %d, %i, %u, %x, %X, %p, %%\n",
			'a', "Bailey", 5088, 42, 48, 255, 255, ptr));
	return (0);
}
