/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 12:58:53 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/03 00:33:45 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*pnt;
	size_t			len;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	pnt = malloc(len + 1);
	if (!pnt)
		return (NULL);
	while (i < len)
	{
		pnt[i] = f(i, s[i]);
		i++;
	}
	pnt[i] = '\0';
	return (pnt);
}
