/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 17:03:05 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/13 18:59:43 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include "./libft/libft.h"

int	ft_printchar(char c);
int	ft_printstr(char *str);
int	ft_printnbr(int n);
int	ft_printunbr(unsigned int n);
int	ft_printhex(unsigned int n, int uplow);
int	ft_printhex_ptr(unsigned long ptr);
int	ft_printf(const char *format, ...);

#endif
