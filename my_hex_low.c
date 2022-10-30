/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_hex_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:36:18 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/30 20:42:53 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	my_hex_low(unsigned int i, int fd, int *counter)
{
	char *s;
	
	s = "0123456789abcdef";
	if (i >= 0 && i < 16)
	{
		my_putchar(s[i], 1, counter);
	}
	if(i > 16)
	{
		my_hex_low((i / 16), 1, counter);
		my_hex_low((i % 16), 1, counter);
	}
	
}

// int main()
// {
// 	printf("%x", 84391);
// }
