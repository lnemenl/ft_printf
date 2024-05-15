/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:46:52 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/03 06:08:27 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*=============================================================================
 * the first occurrence check inside the loop is responsible
 * for returning the pointer to the first occurrence of c
 * in s as soon as it's found. However, if c is not found in s,
 * the loop continues until it reaches the null terminator.
 * After the loop, the second occurrence check is performed to handle the case
 * where c is not present in s, ensuring that the function
 * returns a null pointer to indicate the absence of c in the string.
 *=============================================================================
 */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)0);
}
