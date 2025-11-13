/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:49:58 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/13 02:57:31 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdarg.h>
#include <stdio.h>

int	ft_ischeck(char c)
{
	char	*str;
	int		i;

	str = "cspdiuxX%";
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
int	print_naiba(va_list args, char c)
{
	int	add_byt;

	add_byt = 0;
	if (c == 'c')
		add_byt += print_char(va_arg(args, char)); //=====ok=====
	else if (c == 's')
		add_byt += print_str(va_arg(args, char *)); //=====ok=====
	else if (c == 'p')
		add_byt += print_pointer(va_arg(args, int *)); //======ok=======
	else if (c == 'd' || c == 'i')
		add_byt += print_int(va_arg(args, int)); //======ok======
	// else if (c == 'u')
	// 	add_byt += print_decimal(va_arg(args, unsigned int));
	// else if (c == 'x')
	// 	print_hex_lowercase(va_arg(args, unsigned int));
	// else if (c == 'X')..
	// 	print_hex_uppercase(va_arg(args, unsigned int));
	else
		print_char(c);
	return (add_byt);
}

int	ft_printf(const char *mystr, ...)
{
	va_list	args;
	int		add_byt;
	int		i;

	va_start(args, mystr);
	i = 0;
	add_byt = 0;
	if (!mystr)
		return (0);
	while (mystr[i])
	{
		if (mystr[i] == '%')
		{
			i++;
			if (ft_ischeck(mystr[i]))
				add_byt += print_naiba(args, mystr[i]);
			else
				add_byt += print_char(mystr[i]);
		}
		else
			print_char(mystr[i]);
		i++;
	}
	return (add_byt);
}

// 	int main()
// 	{
// 		ft_printf (NULL);
// printf (NULL);ls