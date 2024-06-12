/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:28:22 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/01 13:32:53 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_positive(int nb, int fd);

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	ft_putnbr_positive(nb, fd);
}

void	ft_putnbr_positive(int nb, int fd)
{
	if (nb > 9)
	{
		ft_putnbr_positive(nb / 10, fd);
		nb = nb % 10 + '0';
		write(fd, &nb, 1);
	}
	else
	{
		nb = nb + '0';
		write(fd, &nb, 1);
	}
}
/*
int main(void)
{
	ft_putnbr(2147483647);
	write (1, "\n", 1);
	ft_putnbr(42);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	return 0;
}
*/
