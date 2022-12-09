/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskelin <meskelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:58:14 by meskelin          #+#    #+#             */
/*   Updated: 2022/12/09 17:41:10 by meskelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_put_chr(int c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_put_str(const char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		ft_put_chr(*str);
		str++;
		count++;
	}
	return (count);
}

int	ft_print_nll(void)
{
	ft_put_str("(null)");
	return (6);
}

int	ft_print_str_nll(const char *str)
{
	if (!str)
		return (ft_print_nll());
	return (ft_put_str(str));
}
