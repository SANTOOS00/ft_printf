/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mystrdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 01:11:49 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/13 09:19:59 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*ft_mystrdup(char *str)
{
	int i;
	char *mystr;

	i = 0;
	while (str[i])
		i++;
	mystr = malloc(i + 1);
	if (!mystr)
	{
		return (NULL);
	}
	i = 0;
	while (str[i])
	{
		mystr[i] = str[i];
		i++;
	}
	mystr[i] = '\0';
	return (mystr);
}