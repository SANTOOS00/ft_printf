/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 22:07:58 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/12 23:31:51 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	len_int(int nb)
{
	int	len;

	len = 0;
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}
int	print_int(int nb)
{
	int add_byt;

	add_byt = 0;
	if (nb == -2147483648)
	{
		add_byt += print_str("-2147483648");
		return (add_byt);
	}
	if (nb < 0)
	{
		nb = -nb;
		print_char('-');
		add_byt++;
	}
	add_byt += len_int(nb);
	if (nb >= 10)
	{
		print_int(nb / 10);
	}
	print_char((nb % 10) + '0');
	return (add_byt);
}