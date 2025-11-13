/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 21:42:39 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/12 22:30:41 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	print_str(char *str)
{
	int i;

	i = 0;
	if (!str)
	{
		print_str("null");
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}