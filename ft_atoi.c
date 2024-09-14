/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:04:14 by mpenas-z          #+#    #+#             */
/*   Updated: 2023/11/20 18:44:47 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_specialcases(const char *nptr)
{
	if (ft_strncmp("2147483647", nptr, 10) == 0)
		return (2147483647);
	else if (ft_strncmp("-2147483648", nptr, 11) == 0)
		return (-2147483648);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	minus;

	i = 0;
	result = 0;
	minus = 1;
	while (ft_isspace(nptr[i]))
		i++;
	while (nptr[i] && ((nptr[i] >= 48 && nptr[i] <= 57)
			|| (nptr[i] == '+' && (i == 0 || ft_isspace(nptr[i - 1])))
			|| (nptr[i] == '-' && (i == 0 || ft_isspace(nptr[i - 1])))))
	{
		if (nptr[i] == '-')
			minus = -1;
		if (nptr[i] >= 48 && nptr[i] <= 57)
			result = result * 10 + (nptr[i] - '0');
		i++;
	}
	if (ft_specialcases(nptr) != 0)
		return (ft_specialcases(nptr));
	return (result * minus);
}
