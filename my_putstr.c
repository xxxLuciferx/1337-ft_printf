/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 01:22:35 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/30 20:26:03 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	my_putstr(char *s, int fd, int *counter)
{
	int	i;

	i = 0;
	if(s == NULL)
	{
		write(fd, "(null)", 6);
		*counter += 6;
		return ;
	}
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
		*counter += 1;
	}
}
