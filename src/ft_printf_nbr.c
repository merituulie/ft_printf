/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskelin <meskelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:06:54 by meskelin          #+#    #+#             */
/*   Updated: 2022/12/09 17:32:37 by meskelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_put_nbr(int n, int *count)
{
	if (n == -2147483648)
	{
		n = 147483648;
		*count += ft_put_chr('-');
		*count += ft_put_chr('2');
	}
	if (n < 0)
	{
		*count += ft_put_chr('-');
		ft_put_nbr(-n, count);
	}
	else if (n > 9)
	{
		ft_put_nbr(n / 10, count);
		ft_put_nbr(n % 10, count);
	}
	else
	{
		*count += ft_put_chr(n + '0');
	}
	return (*count);
}

int	ft_put_nbr_u(unsigned int n, int *count)
{
	if (n > 9)
	{
		ft_put_nbr(n / 10, count);
		ft_put_nbr(n % 10, count);
	}
	else
	{
		*count += ft_put_chr(n + '0');
	}
	return (*count);
}
