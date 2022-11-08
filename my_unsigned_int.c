/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_unsigned_int.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:39:11 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/30 14:44:27 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	my_unsigned_int(unsigned int n, int fd, int *counter)
{
	if (n >= 0 && n <= 9)
		my_putchar((n + '0'), fd, counter);
	if (n >= 10)
	{
		my_unsigned_int(n / 10, fd, counter);
		my_unsigned_int(n % 10, fd, counter);
	}
}
