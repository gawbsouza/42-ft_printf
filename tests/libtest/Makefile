# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 09:48:07 by gasouza           #+#    #+#              #
#    Updated: 2022/05/25 10:06:09 by gasouza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libtest.a
SRCS	=	test_start.c		\
			test_end.c			\
			test_str.c			\
			test_int.c			\
			test_print_result.c	\
			test_category.c
OBJS	=	$(SRCS:.c=.o)
INCS	=	libtest.h 
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -rf
AR		=	ar -rc

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
