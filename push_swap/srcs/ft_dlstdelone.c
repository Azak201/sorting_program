/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:17:18 by amismail          #+#    #+#             */
/*   Updated: 2024/12/19 14:17:20 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <push_swap.h>

void	ft_dlstdelone(t_dlist *lst, void (*del)(int))
{
	if (!lst)
		return ;
	if (lst)
	{
		if (del)
			del(lst->content);
		free (lst);
	}
}
