/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 23:39:55 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/20 18:46:37 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*q;

	q = (char *)s;
	if (!q && !n)
		return (NULL);
	while (n)
	{
		if (*q == (char)c)
			return (q);
		q++;
		n--;
	}
	return (NULL);
}
