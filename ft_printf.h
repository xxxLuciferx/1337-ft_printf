/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 03:20:58 by khaimer           #+#    #+#             */
/*   Updated: 2022/11/01 11:58:58 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *string, ...);
void	my_putstr(char *s, int fd, int *counter);
void	my_putnbr(int n, int fd, int *counter);
void	my_putchar(char c, int fd, int *counter);
void	my_unsigned_int(unsigned int n, int fd, int *counter);
void	my_hex_low(unsigned int i, int fd, int *counter);
void	my_adress(unsigned long i, int fd, int *counter);
void	my_hex_up(unsigned int i, int fd, int *counter);

#endif
