/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:17:36 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/03 00:30:19 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_d;
	size_t	len_s;

	len_s = 0;
	len_d = 0;
	while (*src && src[len_s])
		len_s++;
	if (!dst && !dstsize)
		return (len_s);
	while (dst[len_d] && len_d <= dstsize)
		len_d++;
	if (dstsize == 0 || dstsize <= len_d)
		return (len_s + dstsize);
	while (*dst)
	{
		dst++;
		dstsize--;
	}
	while (--dstsize > 0 && *src)
		*dst++ = *src++;
	*dst = '\0';
	return (len_s + len_d);
}
