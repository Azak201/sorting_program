/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listhandl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:20:50 by amismail          #+#    #+#             */
/*   Updated: 2024/12/19 14:21:08 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <push_swap.h>

static int	clear(t_dlist **stack);

char	**spliter(int arc, char **arv)
{
	char	**tmp;
	int		i;

	if (arc <= 1)
		ft_exit(0, NULL);
	else if (arc == 2)
		tmp = ft_split(arv[1], ' ');
	else
	{
		i = 0;
		tmp = (char **)malloc(sizeof(char *) * arc);
		if (!tmp)
			ft_exit(1, NULL);
		while (++i < arc)
		{
			tmp[i - 1] = ft_strdup(arv[i]);
			if (!tmp[i - 1])
				ft_exit(2, tmp);
		}
		tmp[i - 1] = NULL;
	}
	if (!tmp)
		ft_exit(1, NULL);
	return (tmp);
}

void	handler(char **inputs)
{
	int	i;

	i = 0;
	if (ft_is_numric(inputs[0]))
    ft_exit(2, inputs);
	while (inputs[i])
	{
		if ((ft_is_numric(inputs[i])))
			ft_exit(2, inputs);
		i++;
	}
	if ((ft_is_in_bound(inputs)))
		ft_exit(2, inputs);
	if ((ft_is_uniquenum(inputs)))
		ft_exit(2, inputs);
}

void	ft_exit(int flag, char **str)
{
	int	i;

	i = 0;
	if (flag == 1 || flag == 0)
	{
		if (flag == 1)
			ft_putstr_fd("Error\n", 2);
		exit(1);
	}
	else
	{
		if (str)
		{
			while (str[i])
				free(str[i++]);
			free(str);
		}
		if (flag == 3)
			exit(0);
		else
			ft_putstr_fd("Error\n", 2);
		exit(1);
	}
}

int	inserter(char **inputs)
{
	int		i;
	int		num;
	t_dlist	*stack;
	t_dlist	*item;

	i = 0;
	if (!inputs)
		return (1);
	num = ft_atol(inputs[i++]);
	stack = ft_dlstnew(num);
	if (!stack)
		return (1);
	while (inputs[i])
	{
		num = ft_atol(inputs[i]);
		item = ft_dlstnew(num);
		if (!item)
			return (clear(&stack));
		ft_dlstadd_back(&stack, item);
		i++;
	}
	sorter(stack);
	return (0);
}

static int	clear(t_dlist **stack)
{
	ft_dlstclear(&(*stack), NULL);
	return (1);
}
