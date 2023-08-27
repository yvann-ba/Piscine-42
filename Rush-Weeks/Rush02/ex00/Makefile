# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eplouzen <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/30 19:35:16 by eplouzen          #+#    #+#              #
#    Updated: 2023/07/30 19:35:17 by eplouzen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	gcc
FLAGS	=	-Wall -Werror -Wextra
NAME	=	rush02
SRCS	=	main.c \
		mes_fonctions.c
OBJS	=	$(SRCS:.c=.o)


all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $(NAME) $(OBJS)


.c.o: $(SRCS)
	$(CC) $(FLAGS) -c $< -o $@


clean:
	rm -rf $(OBJS)


fclean: clean
	rm -rf $(NAME)


re: fclean all
