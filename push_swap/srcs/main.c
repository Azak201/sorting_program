/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:53:01 by amismail          #+#    #+#             */
/*   Updated: 2024/12/04 16:53:11 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <push_swap.h>

int	main(int arc, char **arv)
{
	char	**inputs;
	int		val;

	inputs = spliter(arc, arv);
	if (!inputs)
		ft_exit(1, NULL);
	handler(inputs);
	val = inserter(inputs);
	if (val != 0)
		ft_exit(2, inputs);
	ft_exit(3, inputs);
}
