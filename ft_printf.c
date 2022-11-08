/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 02:02:45 by khaimer           #+#    #+#             */
/*   Updated: 2022/11/01 13:10:47 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	cases(char c, int *counter, va_list arg, int fd)
{
	if (c == '%')
	{
		write(fd, &c, 1);
		*counter += 1;
	}
	else if (c == 'c')
		my_putchar(va_arg(arg, int), fd, counter);
	else if (c == 's')
		my_putstr(va_arg(arg, char *), fd, counter);
	else if (c == 'p')
		my_adress(va_arg(arg, unsigned long), fd, counter);
	else if (c == 'i' || c == 'd')
		my_putnbr(va_arg(arg, int), fd, counter);
	else if (c == 'u')
		my_unsigned_int(va_arg(arg, unsigned int), fd, counter);
	else if (c == 'X')
		my_hex_up(va_arg(arg, unsigned int), fd, counter);
	else if (c == 'x')
		my_hex_low(va_arg(arg, unsigned int), fd, counter);
}

int	ft_printf(const char *string, ...)
{
	va_list	arg;
	int		counter;
	int		i;
	int		fd;

	va_start(arg, string);
	counter = 0;
	i = 0;
	fd = 1;
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			cases(string[i], &counter, arg, fd);
		}
		else
			my_putchar(string[i], 1, &counter);
		i++;
	}
	va_end(arg);
	return (counter);
}
