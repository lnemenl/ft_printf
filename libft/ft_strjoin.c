/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:38:22 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/03 00:30:09 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	size_t	i;
	char	*pnt;

	if (!s1 || ! s2)
		return (NULL);
	i = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	pnt = malloc(len + 1);
	if (!pnt)
		return (NULL);
	while (i < len && s1[i])
	{
		pnt[i] = s1[i];
		i++;
	}
	while (i < len && *s2)
		pnt[i++] = *s2++;
	pnt[i] = '\0';
	return (pnt);
}
