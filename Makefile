# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: meskelin <meskelin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 18:49:30 by meskelin          #+#    #+#              #
#    Updated: 2022/12/12 16:46:19 by meskelin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

BUILD_FLAGS = -Wall -Werror -Wextra -c

SRC_FILES = ft_printf_str \
ft_printf_nbr \
ft_printf_hx \
ft_printf_ptr \
ft_printf

H_FILES = /headers/ft_printf

HS = $(addsuffix .h, $(H_FILES))
SRCSUFF = $(addsuffix .c, $(SRC_FILES))
SRCSO = $(SRCSUFF:.c=.o)
SRCSPRE = $(addprefix ./src/, $(SRCSUFF))

.PHONY = all
all: $(NAME)

$(NAME):
	cc $(BUILD_FLAGS) $(SRCSPRE)
	ar rc $(NAME) $(SRCSO)
	ranlib $(NAME)

.PHONY: clean
clean:
	rm -f $(SRCSO)

.PHONY: fclean
fclean: clean
	rm -f $(NAME)

.PHONY: re
re: fclean all
