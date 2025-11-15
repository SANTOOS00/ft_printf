/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:07:58 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/15 21:47:51 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_int(int nb)
{
	int		add_byt;
	long	nbr;

	add_byt = 0;
	nbr = nb;
	if (!nbr)
		return (print_char('0'), 1);
	if (nbr < 0)
	{
		nbr = -nbr;
		print_char('-');
		add_byt++;
	}
	if (nbr > 9)
	{
		add_byt += print_int(nbr / 10);
	}
	add_byt += print_char((nbr % 10) + '0');
	return (add_byt);
}
