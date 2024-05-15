/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:49:22 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/13 17:22:37 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunbr(unsigned int n)
{
	int		length;
	int		retval;
	char	digit;

	length = 0;
	if (n > 9)
	{
		retval = ft_printunbr(n / 10);
		if (retval == -1)
			return (retval);
		length = length + retval;
	}
	digit = (n % 10) + '0';
	if ((write(1, &digit, 1)) == -1)
		return (-1);
	length++;
	return (length);
}
