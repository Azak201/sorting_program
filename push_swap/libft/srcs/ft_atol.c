/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amismail <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:04:23 by amismail          #+#    #+#             */
/*   Updated: 2024/12/19 14:04:57 by amismail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

long	ft_atol(const char *nptr)
{
	int		count;
	int		negative;
	long	number;

	count = 0;
	negative = 1;
	number = 0;
	while ((nptr[count] > 8 && nptr[count] < 14) || (nptr[count] == 32))
		count++;
	if (nptr[count] == '-' || nptr[count] == '+')
	{
		if (nptr[count] == '-')
			negative = -1;
		count++;
	}
	while ((nptr[count] != '\0') && (nptr[count] >= 48 && nptr[count] <= 57))
	{
		number = (number * 10) + nptr[count] - 48;
		count++;
	}
	return (number * negative);
}
