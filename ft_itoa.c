/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 16:42:23 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/20 17:54:41 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	type_string(char *string, int s, int i, int n)
{
	while (s)
	{
		string[i] = ((n % 10) + '0');
		n = n / 10;
		if (n == 0 && i == 1)
		{
			i--;
			string[i] = '-';
			break ;
		}
		i--;
		s--;
	}
}

static int	nbcount(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		n = -n;
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*string;
	int			digitcount;
	int			i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	digitcount = nbcount(n);
	string = (char *)malloc((digitcount + 1) * sizeof(char));
	if (!string)
		return (NULL);
	string[digitcount] = '\0';
	i = digitcount - 1;
	if (n < 0)
		n = -n;
	type_string(string, digitcount, i, n);
	return (string);
}
