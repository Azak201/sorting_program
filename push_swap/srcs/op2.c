/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:22:27 by amismail          #+#    #+#             */
/*   Updated: 2024/12/19 14:22:30 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <push_swap.h>

void	rotate_a(t_dlist **stack_a)
{
	t_dlist	*tmp;

	if (ft_dlstsize(*stack_a) < 2)
		return ;
	tmp = ft_dlstlast(*stack_a);
	tmp->next = (*stack_a);
	(*stack_a) = (*stack_a)->next;
	tmp = tmp->next;
	tmp->next = NULL;
	ft_putendl_fd("ra", 1);
}

void	rotate_b(t_dlist **stack_b)
{
	t_dlist	*tmp;

	if (ft_dlstsize(*stack_b) < 2)
		return ;
	tmp = ft_dlstlast(*stack_b);
	tmp->next = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	tmp = tmp->next;
	tmp->next = NULL;
	ft_putendl_fd("rb", 1);
}

void	rotate_r(t_dlist **stack_a, t_dlist **stack_b)
{
	rotate_a(&(*stack_a));
	rotate_b(&(*stack_b));
}

void	r_rotate_a(t_dlist **stack_a)
{
	t_dlist	*tmp1;
	t_dlist	*tmp2;

	if (ft_dlstsize(*stack_a) < 2)
		return ;
	tmp1 = *stack_a;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		if (tmp2->next == NULL)
			break ;
		tmp1 = tmp1->next;
	}
	tmp2->next = (*stack_a);
	tmp1->next = NULL;
	(*stack_a) = tmp2;
	ft_putendl_fd("rra", 1);
}

void	r_rotate_b(t_dlist **stack_b)
{
	t_dlist	*tmp1;
	t_dlist	*tmp2;

	if (ft_dlstsize(*stack_b) < 2)
		return ;
	tmp1 = *stack_b;
	while (tmp1)
	{
		tmp2 = tmp1->next;
		if (tmp2->next == NULL)
			break ;
		tmp1 = tmp1->next;
	}
	tmp2->next = (*stack_b);
	tmp1->next = NULL;
	(*stack_b) = tmp2;
	ft_putendl_fd("rrb", 1);
}
