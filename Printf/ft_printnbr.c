/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:21:35 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/13 17:22:19 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n);

static int	ft_printnbr_w(int n)
{
	char	c;

	if (n == -2147483648)
	{
		if ((write(1, "-2147483648", 11)) == -1)
			return (-1);
		return (11);
	}
	if (n < 0)
	{
		if ((write(1, "-", 1)) == -1)
			return (-1);
		n = -n;
	}
	if (n >= 10)
	{
		if ((ft_printnbr_w(n / 10)) == -1)
			return (-1);
	}
	c = (n % 10) + '0';
	if ((ft_printchar(c)) == -1)
		return (-1);
	return (1);
}

int	ft_printnbr(int n)
{
	unsigned int	length;
	int				nbr;
	int				retval;

	nbr = n;
	length = 1;
	if (n < 0)
	{
		nbr = -n;
		length++;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		length++;
	}
	retval = ft_printnbr_w(n);
	if (retval == -1 || retval == 11)
		return (retval);
	return (length);
}
