/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_hex_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:36:18 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/31 20:01:07 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	my_hex_low(unsigned int i, int fd, int *counter)
{
	char	*s;

	s = "0123456789abcdef";
	if (i >= 0 && i < 16)
	{
		my_putchar(s[i], fd, counter);
	}
	if (i >= 16)
	{
		my_hex_low((i / 16), fd, counter);
		my_hex_low((i % 16), fd, counter);
	}
}
