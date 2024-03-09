# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 13:36:32 by jidrizi           #+#    #+#              #
#    Updated: 2024/03/08 11:34:04 by jidrizi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
 
CFLAGS = -Wall -Werror -Wextra -std=c99

SRC = ft_toupper.c ft_tolower.c ft_strlen.c ft_memset.c ft_isprint.c ft_isdigit.c ft_isascii.c\
	  ft_isalpha.c ft_isalnum.c ft_bzero.c ft_memcpy.c ft_memmove.c 


OBJS = $(SRC:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)
	@echo "i washed my balls this morning yay!"

fclean: clean
	@rm -f $(NAME)
	@echo "dont forget to clean your 4skin"

re: fclean all

.PHONY: all clean fclean re