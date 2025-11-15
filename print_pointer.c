/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 21:44:50 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/15 21:44:30 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_anaiba(char *str, int i)
{
	char	*mystr;
	int		j;
	int		byt_print;

	j = 2;
	mystr = malloc(i + 3);
	if (!mystr)
	{
		return (0);
	}
	mystr[0] = '0';
	mystr[1] = 'x';
	while (i > 0)
	{
		mystr[j++] = str[--i];
	}
	mystr[j] = '\0';
	byt_print = print_str(mystr);
	free(mystr);
	return (byt_print);
}

int	print_pointer(void *p)
{
	char			*addr;
	unsigned long	addrs_long;
	char			str[20];
	int				i;

	i = 0;
	if (!p)
		return (print_str("(nil)"));
	addr = "0123456789abcdef";
	addrs_long = (unsigned long)p;
	while (addrs_long)
	{
		str[i++] = addr[addrs_long % 16];
		addrs_long /= 16;
	}
	return (print_anaiba(str, i));
}
