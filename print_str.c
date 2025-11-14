/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 21:42:39 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/14 14:42:04 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_str(char *str)
{
	int		i;
	char	*mystr;

	i = 0;
	if (!str)
		i = print_str("(null)");
	else
	{
		mystr = ft_mystrdup(str);
		while (mystr[i])
		{
			write(1, &mystr[i], 1);
			i++;
		}
		free(mystr);
	}
	return (i);
}
