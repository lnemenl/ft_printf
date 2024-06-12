/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 15:56:11 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/03 02:44:18 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isin_set(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i1;
	size_t	i2;
	char	*pnt;

	if (!s1 || !set)
		return (NULL);
	i1 = 0;
	len = ft_strlen(s1);
	i2 = len - 1;
	while (s1[i1] && isin_set(s1[i1], set))
		i1++;
	if (i1 == len)
		return (ft_strdup(""));
	while (i2 && isin_set(s1[i2], set))
		i2--;
	pnt = ft_substr(s1, (unsigned int)i1, (size_t)(i2 - i1 + 1));
	return (pnt);
}

static int	isin_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}
