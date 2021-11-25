/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:09:39 by severi            #+#    #+#             */
/*   Updated: 2021/11/25 17:03:33 by severi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;
	int	begin;

	begin = 0;
	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && begin == 0)
		{
			words++;
			begin = 1;
		}
		else if (s[i] == c)
			begin = 0;
		i++;
	}
	return (words);
}

static int	ft_word_len(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;

}

static void	ft_fill_array(const char *s, char c, char **spl_s, int j)
{
	int	i;
	int	start;

	i = 0;
	start = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c || s[i + 1] == '\0')
		{
			if (start == -1)
				start = i + 1;
			else if (start != -1)
			{
				if (s[i + 1] == '\0')
					spl_s[j++] = ft_strsub(s, start, (i + 1 - start));
				else
					spl_s[j++] = ft_strsub(s, start, (i - start));
				start = -1;
			}
		}
		else if (start == -1)
			start = i;
		i++;
	}
}

char	**ft_strsplit(const char *s, char c)
{
	char	**spl_s;

	spl_s = (char **)malloc(sizeof(spl_s) * (ft_count_words(s, c) + 1));
	ft_fill_array(s, c, spl_s, 0);
	return (spl_s);
}
