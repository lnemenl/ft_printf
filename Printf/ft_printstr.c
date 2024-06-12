/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:13:41 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/13 17:22:28 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *str)
{
	int	i;
	int	retval;

	i = 0;
	if (!str)
	{
		retval = write(1, "(null)", 6);
		return (retval);
	}
	while (str[i])
	{
		if ((write(1, &str[i], 1)) == -1)
			return (-1);
		i++;
	}
	return (i);
}
