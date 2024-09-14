/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:35:24 by mpenas-z          #+#    #+#             */
/*   Updated: 2023/10/17 11:58:49 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, int len)
{
	int				i;
	unsigned char	d;
	char			*str;

	i = 0;
	str = b;
	d = c;
	while (i < len)
	{
		str[i] = d;
		i++;
	}
	return (b);
}
