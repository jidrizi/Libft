# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 13:36:32 by jidrizi           #+#    #+#              #
#    Updated: 2024/06/11 19:04:58 by jidrizi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
 
CFLAGS = -Wall -Werror -Wextra -std=c99

SRC = ft_toupper.c ft_tolower.c ft_strlen.c ft_memset.c ft_isprint.c ft_isdigit.c ft_isascii.c\
	  ft_isalpha.c ft_isalnum.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
	  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
	  ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c\
	  ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c\
	  ft_printf.c coolfunctions.c hexshii.c 

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