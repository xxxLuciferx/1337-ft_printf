/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 03:20:58 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/30 20:41:36 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *string, ...);
void	my_putstr(char *s, int fd, int *counter);
void	my_putnbr(int n, int fd, int *counter);
void	my_putchar(char c, int fd, int *counter);
void	my_unsigned_int(unsigned int n, int fd, int *counter);
void	my_hex_low(unsigned int i,int fd, int *counter);
void	my_adress(unsigned long i, int fd, int *counter);
void	my_hex_up(unsigned int i, int fd, int *counter);



#endif