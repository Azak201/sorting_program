/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:17:46 by amismail          #+#    #+#             */
/*   Updated: 2024/12/19 14:17:54 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <push_swap.h>

t_dlist	*ft_dlstnew(int content)
{
	t_dlist	*newitem;

	newitem = malloc(sizeof(t_dlist));
	if (!newitem)
		return (NULL);
	newitem->content = content;
	newitem->next = NULL;
	return (newitem);
}
