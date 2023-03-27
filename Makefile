# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gasouza <gasouza@student.42sp.org.br>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 20:26:56 by gasouza           #+#    #+#              #
#    Updated: 2023/03/27 14:05:30 by gasouza          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libftprintf.a

SRCS_D	=	src
INCS_D	=	inc

SRCS_F	=	get_str_len.c			\
			ft_num_base_str.c	\
			ft_print_char.c		\
			ft_print_str.c		\
			ft_print_nbr.c		\
			ft_print_hex.c		\
			ft_print_ptr.c		\
			ft_print_num_base.c	\
			ft_printf.c
			
SRCS	= 	$(addprefix $(SRCS_D)/, $(SRCS_F))

OBJS	=	$(SRCS:.c=.o)

CFLAGS	=	-Wall -Werror -Wextra
COMPILER=	gcc $(CFLAGS) -I $(INCS_D) -c
ARCHIVE	=	ar -rc
CLEANUP	=	rm -f

.PHONY: 	all
all: 		$(NAME)

$(NAME): 	$(OBJS)
			$(ARCHIVE) $(NAME) $(OBJS)

%.o: 		%.c
			$(COMPILER) $< -o $@

.PHONY: 	clean
clean:
			$(CLEANUP) $(OBJS)

.PHONY: 	fclean
fclean:		clean
			$(CLEANUP) $(NAME)

.PHONY: 	re
re: 		fclean all
