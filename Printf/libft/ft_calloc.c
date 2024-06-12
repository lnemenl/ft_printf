/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 10:34:19 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/03 00:10:48 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	numofb;
	size_t	max;

	max = (size_t)(-1);
	if (count > 0 && max / count < size)
		return (NULL);
	numofb = count * size;
	ptr = (void *)malloc(numofb);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, numofb);
	return (ptr);
}
