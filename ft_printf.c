/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 02:02:45 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/30 20:41:53 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"
static void	Printer_string(char c, int *counter, va_list arg)
{
	if(c == '%')
	{
		write(1, "%", 1);
		*counter += 1;
	}
	else if(c == 'c')
		my_putchar(va_arg(arg, int), 1, counter);
	else if (c == 's')
		my_putstr(va_arg(arg, char*), 1, counter);
	else if (c == 'p')
		my_adress(va_arg(arg, unsigned long), 1, counter);
		// ?????? adress unsigned long (8byte) 0x
	else if(c == 'i' || c == 'd')
		my_putnbr(va_arg(arg, int), 1, counter);
	else if(c == 'u')
		my_unsigned_int(va_arg(arg, int), 1, counter);
	else if(c == 'X')
		my_hex_up(va_arg(arg, unsigned int), 1, counter);
	else if(c == 'x')
		my_hex_low(va_arg(arg, unsigned int), 1, counter);
	
}
int ft_printf(const char *string, ...)
{
	int counter;
	int i;
	counter = 0;
	i = 0;
	va_list arg;
	va_start(arg, string);
	while (string[i])
	{
		if (string[i] == '%')
		{
			i++;
			Printer_string(string[i], &counter, arg);
		}
		else
			my_putchar(string[i], 1, &counter);
		i++;
	}
	return(counter);
}
// int main()
// {
// 	ft_printf("NULL");
// }