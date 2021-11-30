/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:47:18 by severi            #+#    #+#             */
/*   Updated: 2021/11/30 10:35:08 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	skip_c(char c)
{
	if (c == '\t' || c == '\v' || c == '\n' || c == '\r' || c == '\f')
		return (0);
	if (c == ' ')
		return (0);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	long	value;

	i = 0;
	sign = 1;
	while (skip_c(nptr[i]) == 0)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign *= (-1);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		value = value * 10 + nptr[i] - '0';
		i++;
	}
	return ((int)(sign * value));
}
