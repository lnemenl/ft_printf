/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:52:30 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/13 17:22:00 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check(char *hex_digits)
{
	if ((write(1, &hex_digits[0], 1)) == -1)
		return (-1);
	return (3);
}

int	ft_printhex_ptr(unsigned long ptr)
{
	char	*hex_digits;
	char	buffer[16];
	int		length;
	int		index;

	length = 0;
	index = 0;
	hex_digits = "0123456789abcdef";
	if ((write(1, "0x", 2)) == -1)
		return (-1);
	length = length + 2;
	if (ptr == 0)
		return (check(hex_digits));
	while (ptr > 0)
	{
		buffer[index++] = hex_digits[ptr % 16];
		ptr = ptr / 16;
	}
	while (index > 0)
	{
		if ((write(1, &buffer[--index], 1)) == -1)
			return (-1);
		length++;
	}
	return (length);
}
