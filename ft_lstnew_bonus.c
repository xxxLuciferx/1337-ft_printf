/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:29:35 by khaimer           #+#    #+#             */
/*   Updated: 2022/10/26 22:18:20 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*file;

	file = (t_list *)malloc(sizeof(t_list));
	if (!file)
		return (NULL);
	file -> content = content;
	file -> next = NULL;
	return (file);
}
