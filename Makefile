# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gmohamed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 13:18:05 by gmohamed          #+#    #+#              #
#    Updated: 2024/07/17 13:18:56 by gmohamed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC   =   ft_printf.c\
		   ft_intlen.c\
		   ft_putstr.c\
		   ft_putchar.c\
		   ft_int.c\
		   ft_unsigned.c\
		   ft_hex.c\
		   ft_pointer.c\
		   ft_pointer_hex.c\
		   ft_pointer_intlen.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror


RM  = rm -f


.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} 
		
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

