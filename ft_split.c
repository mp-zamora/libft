/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:54:44 by mpenas-z          #+#    #+#             */
/*   Updated: 2023/11/15 19:55:12 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	words;

	i = -1;
	words = 0;
	while (s[++i])
	{
		if ((s[i + 1] && s[i + 1] != c && s[i] == c) || (i == 0 && s[i] != c))
			words++;
	}
	return (words);
}

int	ft_getchars(char const *s, char c, int word)
{
	int	i;
	int	words;
	int	characters;

	i = -1;
	words = 0;
	characters = 0;
	while (s[++i] && words <= word)
	{
		if ((s[i + 1] && s[i + 1] != c && s[i] == c) || (i == 0 && s[i] != c))
			words++;
		if (word == words && s[i] != c)
			characters++;
	}
	return (characters);
}

char	*ft_getword(char const *s, char c, int word, char *wordreturned)
{
	int		i;
	int		j;
	int		words;

	i = -1;
	j = -1;
	words = 0;
	while (s[++i] && words <= word)
	{
		if ((s[i + 1] && s[i + 1] != c && s[i] == c) || (i == 0 && s[i] != c))
			words++;
		if (word == words && s[i] != c)
			wordreturned[++j] = s[i];
	}
	wordreturned[++j] = '\0';
	return (wordreturned);
}

void	*ft_free(char **strs, int count)
{
	int	i;

	i = -1;
	while (++i < count)
		free(strs[i]);
	free(strs);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		words;
	int		i;

	words = ft_countwords(s, c);
	strs = ft_calloc((words + 1), sizeof(char *));
	if (!strs)
		return (NULL);
	i = -1;
	while (++i < words)
	{
		strs[i] = (char *)malloc((ft_getchars(s, c, i + 1) + 1) * sizeof(char));
		if (!strs[i])
			return (ft_free(strs, i));
	}
	i = -1;
	while (++i < words)
		strs[i] = ft_getword(s, c, i + 1, strs[i]);
	return (strs);
}
