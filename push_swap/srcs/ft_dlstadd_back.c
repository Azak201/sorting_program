/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:16:46 by amismail          #+#    #+#             */
/*   Updated: 2024/12/19 14:16:58 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <push_swap.h>

void	ft_dlstadd_back(t_dlist **lst, t_dlist *new)
{
	t_dlist	*ptr;

	ptr = ft_dlstlast(*lst);
	if (!ptr)
		*lst = new;
	else
		ptr->next = new;
}
