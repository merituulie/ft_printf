/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meskelin <meskelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:03:06 by meskelin          #+#    #+#             */
/*   Updated: 2022/12/09 17:38:36 by meskelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_strlen(const char *s);
int	ft_put_chr(int c);
int	ft_print_nll(void);
int	ft_print_str_nll(const char *str);
int	ft_print_hx(unsigned int nbr, int *count, int lower_case);
int	ft_print_hx_l(unsigned long nbr, int *count);
int	ft_put_nbr(int n, int *count);
int	ft_put_nbr_u(unsigned int n, int *count);
int	ft_printf_ptr(void	*ptr);
int	ft_printf(const char *str, ...);

#endif
