# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rkhakimu <rkhakimu@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/07 15:13:56 by rkhakimu          #+#    #+#              #
#    Updated: 2024/05/13 19:01:36 by rkhakimu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printchar.c ft_printf.c ft_printhex_ptr.c ft_printhex.c ft_printnbr.c ft_printstr.c ft_printunbr.c
LIBFTD = libft
FLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C $(LIBFTD)
	cp $(LIBFTD)/libft.a $@
	ar -ruvc $(NAME) $(OBJ)

%.o: %.c
	cc $(FLAGS) -c $^ -o $@ 

clean:
	$(MAKE) clean -C $(LIBFTD)
	rm -f ${OBJ}

fclean: clean
	$(MAKE) fclean -C $(LIBFTD)
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
