/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 13:18:07 by mpenas-z          #+#    #+#             */
/*   Updated: 2023/10/03 09:56:30 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	while (i > 0)
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i--;
	}
	if (s[i] == (char)c)
		return ((char *) &s[i]);
	return (NULL);
}
