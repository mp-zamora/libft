/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:26:10 by mpenas-z          #+#    #+#             */
/*   Updated: 2023/11/19 20:16:14 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*templst;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	templst = ft_lstlast(*lst);
	templst->next = new;
}
