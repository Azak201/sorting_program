/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op1.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:22:18 by amismail          #+#    #+#             */
/*   Updated: 2024/12/19 14:22:21 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <push_swap.h>

void	swap_a(t_dlist **stack_a)
{
	t_dlist	*tmp;

	if (ft_dlstsize(*stack_a) < 2)
		return ;
	tmp = (*stack_a)->next;
	(*stack_a)->next = tmp->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	ft_putendl_fd("sa", 1);
}

void	swap_b(t_dlist **stack_b)
{
	t_dlist	*tmp;

	if (ft_dlstsize(*stack_b) < 2)
		return ;
	tmp = (*stack_b)->next;
	(*stack_b)->next = tmp->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	ft_putendl_fd("sb", 1);
}

void	swap_s(t_dlist **stack_a, t_dlist **stack_b)
{
	swap_a(&(*stack_a));
	swap_b(&(*stack_b));
}

void	push_a(t_dlist **stack_a, t_dlist **stack_b)
{
	t_dlist	*tmp;

	if (!(*stack_b))
		return ;
	tmp = (*stack_b);
	*stack_b = (*stack_b)->next;
	tmp->next = *stack_a;
	*stack_a = tmp;
	ft_putendl_fd("pa", 1);
}

void	push_b(t_dlist **stack_a, t_dlist **stack_b)
{
	t_dlist	*tmp;

	if (!(*stack_a))
		return ;
	tmp = (*stack_a);
	*stack_a = (*stack_a)->next;
	tmp->next = *stack_b;
	*stack_b = tmp;
	ft_putendl_fd("pb", 1);
}
