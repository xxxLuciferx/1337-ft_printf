/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_hex_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:48:04 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/30 20:43:23 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	my_hex_up(unsigned int i, int fd, int *counter)
{
	char *s;
	
	s = "0123456789ABCDEF";
	if (i >= 0 && i < 16)
	{
		my_putchar(s[i], fd, counter);
	}
	if(i > 16)
	{
		my_hex_low((i / 16), 1, counter);
		my_hex_low((i % 16), 1, counter);
	}
}