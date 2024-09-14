/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpenas-z <mpenas-z@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 19:40:58 by mpenas-z          #+#    #+#             */
/*   Updated: 2023/11/19 20:13:43 by mpenas-z         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*templst;

	if (!(*lst) || !del)
		return ;
	while ((*lst))
	{
		templst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = templst;
	}
	*lst = NULL;
}
