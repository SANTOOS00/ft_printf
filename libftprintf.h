/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 00:13:15 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/13 02:56:30 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

#include <unistd.h>
#include <stdio.h>
int print_char(char c);
int print_str(char *str);
int print_pointer(int *p);
int print_int(int nb);

char *ft_mystrdup(char *str);

#endif