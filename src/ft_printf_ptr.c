/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskelin <meskelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:08:59 by meskelin          #+#    #+#             */
/*   Updated: 2022/12/12 12:08:55 by meskelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_print_ptr(void	*ptr)
{
	int	counter;

	counter = 0;
	counter += ft_print_str_nll("0x");
	if (!ptr)
		return (counter + ft_print_chr('0'));
	return (ft_print_hx_l((unsigned long)ptr, &counter));
}
