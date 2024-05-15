/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:37:40 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/13 18:26:14 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int n, int uplow)
{
	char	*hex_digits;
	char	digit;
	int		length;
	int		retval;

	length = 0;
	if (uplow > 0)
		hex_digits = "0123456789abcdef";
	else
		hex_digits = "0123456789ABCDEF";
	if (n >= 16)
	{
		retval = ft_printhex(n / 16, uplow);
		if (retval == -1)
			return (retval);
		length = length + retval;
	}
	digit = hex_digits[n % 16];
	if ((write(1, &digit, 1)) == -1)
		return (-1);
	length++;
	return (length);
}
