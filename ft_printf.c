/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:49:58 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/12 09:19:47 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include "libftprintf.h"
#include <stdarg.h>

// int printf_args(const char *mystr, va_list args)
// {
// 	va_list copy;
// 	va_copy(copy, args);
// 	if (mystr)
// 	{
// 		if (mystr == '%')
// 		{
// 			mystr++;
// 			if ()
// 		}
// 	}
	
// }
// int  printf_str (char *str)
// {
	
// }
// int  print_pointeur(int *p)
// {
	
// }

// int print_decmal(int a)
// {
	
// }
// int print_integer(int a)
// {
	
// }
int ft_ischeck(char c)
{
	char *str;
	int i;

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

int main()
{
	int tmp = ft_ischeck('a');
	printf ("%d", tmp);
}

// int ft_printf(const char *mystr, ...)
// {
// 	va_list args;
// 	va_start(args,mystr);
// 	int byt;
// 	int i = 0;
// 	byt = 0;
// 	if (!mystr)
// 		return (0);

// 	while (mystr[i])
// 	{
// 		if (mystr[i] == '%')
// 		{
// 			i++;
// 			if (ft_ischeck(mystr[i]))
// 			{
				
// 			}	
// 		}
// 	}
	
	
// 	int main()
// 	{
// 		ft_printf (NULL);
	// printf (NULL);

		// mystr++;
		// if (*mystr == 's')
		// 	printf_str(va_arg(args,char *));
		// if else (*mystr == 'p')
		// 	print_pointeur(va_arg(args, int *));
		// if else (*mystr == 'd')
		// 	print_decmal(va_arg(args, int));
		// if else (*mystr == 'i')
		// 	print_integer(va_arg(args, int));
		// if else (*mystr == 'u')
		// 	print_unsigend_int(va_arg(args, unsigned int));
		// if else (*mystr == 'x')
		// 	print_hexadecimal_lowercase(va_arg(args, unsigned int));
		// if else (*mystr == 'X')
		// 	print_hexadecimal_uppercase(va_arg(args unsigned int));
		// else
		// 	print_char (mystr);
		// }
		// mystr++;