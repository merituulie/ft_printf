/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskelin <meskelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:45:54 by meskelin          #+#    #+#             */
/*   Updated: 2022/12/09 17:39:36 by meskelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

static int	ft_puttype(va_list args, const char format)
{
	int	count;
	int	nbrcount;

	count = 0;
	nbrcount = 0;
	if (format == 'c')
		count += ft_put_chr(va_arg(args, int));
	else if (format == 'i' || format == 'd')
		count += ft_put_nbr(va_arg(args, int), &nbrcount);
	else if (format == 'u')
		count += ft_put_nbr_u(va_arg(args, unsigned int), &nbrcount);
	else if (format == 's')
		count += ft_print_str_nll(va_arg(args, char *));
	else if (format == 'p')
		count += ft_printf_ptr(va_arg(args, void *));
	else if (format == 'x')
		count += ft_print_hx(va_arg(args, unsigned int), &nbrcount, 1);
	else if (format == 'X')
		count += ft_print_hx(va_arg(args, unsigned int), &nbrcount, 0);
	else if (format == '%')
		count += ft_put_chr('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
			count += ft_puttype(args, *(++str));
		else
			count += ft_put_chr(*str);
		str++;
	}
	va_end(args);
	return (count);
}
