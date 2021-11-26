/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: severi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:09:39 by severi            #+#    #+#             */
/*   Updated: 2021/11/26 00:25:00 by severi           ###   ########.fr       */
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
	int	len;

	len = 0;
	while(s[len] != '\0' && s[len] != c)
	{
		len++;
	}
	return (len);
}

static void	ft_fill_array(const char *s, char c, char **spl_s, int words)
{
	int	i;
	int word_len;
	int	j;

	j = 0;
	i = 0;
	word_len = 0;
	while (words > 0)
	{
		while (s[i] == c)
			i++;
		word_len = ft_word_len(s + i, c);
		spl_s[j++] = ft_strsub(s, i, word_len);
		i += word_len;
		words--;
	}
}

char	**ft_strsplit(const char *s, char c)
{
	char	**spl_s;
	int		words;

	words = ft_count_words(s, c);
	spl_s = (char **)malloc(sizeof(spl_s) * (words + 1));
	ft_fill_array(s, c, spl_s, words);
	return (spl_s);
}
