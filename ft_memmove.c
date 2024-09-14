/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 18:01:40 by mpenas-z          #+#    #+#             */
/*   Updated: 2023/10/17 12:11:43 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	if (!dst && !src)
		return (0);
	if (d > s)
	{
		i = len + 1;
		while (--i > 0)
			d[i - 1] = s[i - 1];
	}
	else
	{
		i = -1;
		while (++i < len)
			d[i] = s[i];
	}
	return (dst);
}
