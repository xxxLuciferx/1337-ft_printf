/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:29:21 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/20 19:47:33 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_s;
	size_t	src_s;
	size_t	j;

	if (dstsize == 0 || (!src && !dst))
	{
		if (dstsize == 0 && src)
			return (ft_strlen(src));
		return (0);
	}
	j = dstsize;
	src_s = ft_strlen(src);
	dst_s = ft_strlen(dst);
	while (*dst)
	{
		dst++;
		if (j > 0)
			j--;
	}
	while (*src && j-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	if (dstsize > dst_s)
		return (dst_s + src_s);
	return (dstsize + src_s);
}
