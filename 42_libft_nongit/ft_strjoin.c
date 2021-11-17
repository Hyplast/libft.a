/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:18:46 by severi            #+#    #+#             */
/*   Updated: 2021/11/14 17:32:36 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s3;
	size_t	len_s3;
	size_t	len_s1;
	size_t	i;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s3 = len_s1 + ft_strlen(s2);
	s3 = ft_strnew(len_s3);
	while (i < len_s1)
	{
		s3[i] = s1[i];
		i++;
	}
	s3 = ft_strcat(s3, s2);
	s3[len_s3] = '\0';
	return (s3);
}
