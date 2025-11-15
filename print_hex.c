/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:46:15 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/15 21:32:12 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	len_int(unsigned int nb)
{
	int	len;

	len = 0;
	while (nb)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}

int	print_hex(unsigned int number, int tmp)
{
	int		size;
	char	*buffer;
	char	str[20];

	if (!number)
		return (print_char('0'));
	if (tmp)
		buffer = "0123456789abcdef";
	else
		buffer = "0123456789ABCDEF";
	size = len_int(number);
	str[size] = '\0';
	while (number)
	{
		str[--size] = buffer[number % 16];
		number /= 16;
	}
	size = print_str(str);
	return (size);
}
