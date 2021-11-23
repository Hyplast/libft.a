/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:09:39 by severi            #+#    #+#             */
/*   Updated: 2021/11/23 22:44:09 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			if (s[i + 1] != c)
				words++;
		i++;
	}
	return (words);
}

char	**ft_strsplit(const char *s, char c)
{
	char	**spl_s;
	int		start;
	int		end;
	int		i;
	int		j;
	int		words;

	i = 0;
	j = 0;
	start = -1;
	end = -1;
	words = count_words(s, c);
	spl_s = (char **)malloc(sizeof(spl_s) * (words + 1));
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (start == -1)
				start = i + 1;
			else if (start != -1)
			{
				end = i - 1;
				spl_s[j++] = ft_strsub(s, start, (end - start));
				start = -1;
			}
		}
		i++;
	}
	return (spl_s);
}
