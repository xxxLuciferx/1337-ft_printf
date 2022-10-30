/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 16:55:38 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/30 20:36:42 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	my_hex_lo(unsigned long i,int fd, int *counter)
{
	char *s;
	
	s = "0123456789abcdef";
	if (i >= 0 && i < 16)
	{
		my_putchar(s[i], fd, counter);
	}
	else
	{
		my_hex_lo((i / 16),fd, counter);
		my_hex_lo((i % 16),fd, counter);
	}
	
}

void	my_adress(unsigned long i, int fd, int *counter)
{
	write(fd, "0x", 2);
	counter += 2;
	my_hex_lo(i, fd, counter);
	
}