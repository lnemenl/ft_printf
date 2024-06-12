/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 16:10:30 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/03 01:26:31 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pnt;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		pnt = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(pnt, del);
	}
}
