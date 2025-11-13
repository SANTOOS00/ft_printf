/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 21:44:50 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/13 03:22:50 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdlib.h>
int ft_print_pointer(char *buffer, int i , char *str)
{
	int byt_add;

	byt_add = 0;
	str = malloc (i + 1);
	if (!str)
	{
		return (0);
	}
	str[0] = '0';
	str[1] = '1';
	int j = 2;
	while ()
	str[j] = '\0';
	return (print_str(str));
}

int		print_pointer(int *p)
{
	char *hexdec = "0123456789abcdef";
	unsigned long addr;
	char buffer[17];
	int i;
	char *str;

	i = 0;
	addr = (unsigned long)p;
	if (!p)
		print_str("0x0");
	while (addr > 0)
	{
		buffer[i++] = hexdec[addr % 16];
		addr = addr / 16;
	}
	int byt_print = ft_print_pointer (buffer, i, str);
	free(str); 
	return (byt_print);
}

int main()
{
	int a = 9;
	int *p = &a;
	int pt = printf ("%p", p);
	int  v = print_pointer(p);
	printf ("%d || %d", v, pt);
}