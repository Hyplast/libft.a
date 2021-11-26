/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:47:48 by severi            #+#    #+#             */
/*   Updated: 2021/11/26 02:03:39 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int c)
{
	int	digits;

	digits = 0;
	if (c < 0)
		c *= -1;
	while (c > 0)
	{
		digits++;
		c /= 10;
	}
	return (digits);
}

char	*ft_itoa(int c)
{
	char	*s;
	int		digits;
	int		value;

	value = c;
	digits = count_digits(c);
	if (c < 0)
	{
		digits++;
		s = ft_strnew(digits);
		s[0] = '-';
		value *= -1;
	}
	else
		s = ft_strnew(digits);
	while (value > 0)
	{
		s[--digits] = (value % 10) + '0';
		value /= 10;
	}
	return (s);
}
