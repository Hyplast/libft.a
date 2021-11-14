/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 20:47:18 by severi            #+#    #+#             */
/*   Updated: 2021/11/14 20:58:59 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	over_int;
	int		max_int;
	int		i;
	int		sign;
	int		value;

	i = 0;
	sign = 1;
	max_int ~= 0;
	if (*nptr == '-')
		sign *= (-1);
	while(

	return (sign*value);
}
