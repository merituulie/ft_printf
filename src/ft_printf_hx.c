/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hx.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskelin <meskelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:55:06 by meskelin          #+#    #+#             */
/*   Updated: 2022/12/12 12:08:08 by meskelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_print_hx(unsigned int nbr, int *count, int lc)
{
	if (nbr > 15)
	{
		ft_print_hx(nbr / 16, count, lc);
		ft_print_hx(nbr % 16, count, lc);
	}
	else if (nbr < 16 && nbr > 9)
	{
		if (lc)
			*count += ft_print_chr(nbr + 87);
		else
			*count += ft_print_chr(nbr + 55);
	}
	else
		*count += ft_print_chr(nbr + 48);
	return (*count);
}

int	ft_print_hx_l(unsigned long nbr, int *count)
{
	if (nbr > 15)
	{
		ft_print_hx_l(nbr / 16, count);
		ft_print_hx_l(nbr % 16, count);
	}
	else if (nbr < 16 && nbr > 9)
		*count += ft_print_chr(nbr + 87);
	else
		*count += ft_print_chr(nbr + 48);
	return (*count);
}
