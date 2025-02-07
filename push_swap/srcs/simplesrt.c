/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simplesrt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:22:55 by amismail          #+#    #+#             */
/*   Updated: 2024/12/19 14:22:57 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <push_swap.h>

void	handle2(t_dlist **stack, int flag)
{
	t_dlist	*tmp;

	tmp = (*stack)->next;
	if ((*stack)->index > tmp->index)
	{
		if (flag == 1)
			swap_a(&(*stack));
		else
			swap_b(&(*stack));
	}
}

void	handle3(t_dlist **stack_a)
{
	int		i;
	int		max;
	t_dlist	*tmp;

	tmp = *stack_a;
	i = 0;
	max = tmp->index;
	while (tmp)
	{
		if (max < tmp->index)
			max = tmp->index;
		tmp = tmp->next;
	}
	tmp = *stack_a;
	while (tmp->index != max && ++i)
		tmp = tmp->next;
	if (i == 0)
		rotate_a(&(*stack_a));
	else if (i == 1)
		r_rotate_a(&(*stack_a));
	tmp = (*stack_a)->next;
	if (tmp->index < (*stack_a)->index)
		swap_a(&(*stack_a));
}

void	handle4(t_dlist **stack_a, t_dlist **stack_b)
{
	int		i;
	t_dlist	*tmp;

	tmp = *stack_a;
	i = 0;
	while (tmp->index != 0)
	{
		i++;
		tmp = tmp->next;
	}
	if (i < 2)
	{
		if ((*stack_a)->index != 0)
			rotate_a(&(*stack_a));
		push_b(&(*stack_a), &(*stack_b));
	}
	else
	{
		while ((*stack_a)->index != 0)
			r_rotate_a(&(*stack_a));
		push_b(&(*stack_a), &(*stack_b));
	}
	handle3(&(*stack_a));
	push_a(&(*stack_a), &(*stack_b));
}

void	handle5(t_dlist **stack_a, t_dlist **stack_b)
{
	while (((*stack_a)->index != 0) && ((*stack_a)->index != 4))
		rotate_a(&(*stack_a));
	push_b(&(*stack_a), &(*stack_b));
	while (((*stack_a)->index != 0) && ((*stack_a)->index != 4))
		rotate_a(&(*stack_a));
	push_b(&(*stack_a), &(*stack_b));
	handle3(&(*stack_a));
	handle2(&(*stack_b), 2);
	push_a(&(*stack_a), &(*stack_b));
	push_a(&(*stack_a), &(*stack_b));
	rotate_a(&(*stack_a));
}

int	is_sorted(t_dlist *stack)
{
	int	i;

	i = 0;
	while ((i == stack->index))
	{
		i++;
		if (stack->next == NULL)
			return (0);
		stack = stack->next;
	}
	return (1);
}
