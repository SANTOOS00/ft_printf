/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decmal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:24:23 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/15 21:50:22 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_decimal(unsigned int number)
{
	int	byt_print;

	byt_print = 0;
	if (number == 0)
	{
		return (print_char('0'));
	}
	if (number > 9)
		byt_print += print_decimal(number / 10);
	byt_print += print_char((number % 10) + '0');
	return (byt_print);
}
