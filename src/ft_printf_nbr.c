/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskelin <meskelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:06:54 by meskelin          #+#    #+#             */
/*   Updated: 2022/12/12 12:08:46 by meskelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_print_nbr(int n, int *count)
{
	if (n == -2147483648)
	{
		n = 147483648;
		*count += ft_print_chr('-');
		*count += ft_print_chr('2');
	}
	if (n < 0)
	{
		*count += ft_print_chr('-');
		ft_print_nbr(-n, count);
	}
	else if (n > 9)
	{
		ft_print_nbr(n / 10, count);
		ft_print_nbr(n % 10, count);
	}
	else
	{
		*count += ft_print_chr(n + '0');
	}
	return (*count);
}

int	ft_print_nbr_u(unsigned int n, int *count)
{
	if (n > 9)
	{
		ft_print_nbr(n / 10, count);
		ft_print_nbr(n % 10, count);
	}
	else
	{
		*count += ft_print_chr(n + '0');
	}
	return (*count);
}
