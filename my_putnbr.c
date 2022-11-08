/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 23:27:15 by khaimer           #+#    #+#             */
/*   Updated: 2022/11/01 13:07:15 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	my_putnbr(int n, int fd, int *counter)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		*counter += 11;
		return ;
	}
	if (n < 0)
	{
		my_putchar('-', fd, counter);
		n = -n;
	}
	if (n >= 0 && n <= 9)
		my_putchar((n + '0'), fd, counter);
	if (n >= 10)
	{
		my_putnbr(n / 10, fd, counter);
		my_putnbr(n % 10, fd, counter);
	}
}
