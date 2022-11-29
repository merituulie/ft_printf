# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meskelin <meskelin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 18:49:30 by meskelin          #+#    #+#              #
#    Updated: 2022/11/29 18:49:30 by meskelin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC_FILES =

H_FILES = /headers/ft_printf

HS = $(addsuffix .h, $(H_FILES))

all: $(NAME)

$(NAME):

clean:

fclean:

re:
