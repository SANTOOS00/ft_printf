/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 00:13:15 by moerrais          #+#    #+#             */
/*   Updated: 2025/11/15 21:58:45 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *mystr, ...);
int		print_char(char c);
int		print_str(char *str);
int		print_pointer(void *p);
int		print_int(int nb);
char	*ft_mystrdup(char *str);
int		print_decimal(unsigned int number);
int		print_hex(unsigned int number, int tmp);
int		print_hex(unsigned int number, int tmp);
int		print_decimal(unsigned int number);
#endif
