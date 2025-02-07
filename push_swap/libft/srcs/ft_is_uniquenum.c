/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_uniquenum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:10:48 by amismail          #+#    #+#             */
/*   Updated: 2024/12/19 14:10:53 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_uniquenum(char **str)
{
	int	i;
	int	j;
	int	num1;
	int	num2;

	i = 0;
	while (str[i])
	{
		num1 = ft_atoi(str[i]);
		j = i + 1;
		while (str[j])
		{
			num2 = ft_atoi(str[j]);
			if (num1 == num2)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
