/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:16:07 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/03 00:35:39 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_n;

	if (!haystack && !len)
		return (NULL);
	i = 0;
	len_n = ft_strlen(needle);
	if (!len_n)
		return ((char *)haystack);
	while (*haystack && i + len_n <= len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, len_n) == 0)
			return ((char *)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
