# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moerrais <moerrais@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/31 23:40:14 by moerrais          #+#    #+#              #
#    Updated: 2025/11/12 09:23:59 by moerrais         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

SRC = mystrdup.c print_char.c print_int.c\
	print_pointer.c print_str.c


OBG = $(SRC:%.c=%.o)
 
all: $(NAME)

$(NAME): $(OBG)

%.o: %.c libftprintf.h
	$(CC) $(FLAGS) -c $< -o $@
	ar src $(NAME) $@

clean: 
	rm -f $(NAME)

fclean: clean
	rm -f $(OBG)

re: fclean all
