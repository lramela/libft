# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lramela <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 14:29:03 by lramela           #+#    #+#              #
#    Updated: 2019/06/04 14:38:49 by lramela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

SOURCES = *.c

OBJECTS = *.o

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c $(SOURCES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
	rm -f $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
