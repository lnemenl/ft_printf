/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 14:06:33 by rkhakimu          #+#    #+#             */
/*   Updated: 2024/05/13 18:05:10 by rkhakimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	type(const char *format, va_list *arg)
{
	int	i;

	i = 0;
	if (*format == 'c')
		i = i + ft_printchar(va_arg(*arg, int));
	else if (*format == 's')
		i = i + ft_printstr(va_arg(*arg, char *));
	else if (*format == 'd' || *format == 'i')
		i = i + ft_printnbr(va_arg(*arg, int));
	else if (*format == 'u')
		i = i + ft_printunbr(va_arg(*arg, unsigned int));
	else if (*format == 'p')
		i = i + ft_printhex_ptr(va_arg(*arg, unsigned long));
	else if (*format == 'x')
		i = i + ft_printhex(va_arg(*arg, unsigned int), 1);
	else if (*format == 'X')
		i = i + ft_printhex(va_arg(*arg, unsigned int), -1);
	return (i);
}

static int	error_check(va_list args)
{
	va_end(args);
	return (-1);
}

int	ft_printf(const char *format, ...)
{
	va_list			args;
	int				retval;
	unsigned int	i;

	i = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (ft_strchr("cspdiuxX", *format))
				retval = type(format, &args);
			else if (*format == '%')
				retval = ft_printchar('%');
		}
		else
			retval = ft_printchar(*format);
		if (retval == -1)
			return (error_check(args));
		i = i + retval;
		format++;
	}
	va_end(args);
	return (i);
}
