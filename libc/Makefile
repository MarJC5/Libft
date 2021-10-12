# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 18:11:28 by jmartin           #+#    #+#              #
#    Updated: 2021/10/12 23:53:42 by jmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libft.a
CFLAGS		= 	-Wall -Werror -Wextra -I. -c
CC			= 	gcc
FILES		= 	ft_atoi.c \
				ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memset.c \
				ft_strchr.c \
				ft_strlen.c \
				ft_tolower.c \
				ft_toupper.c
OBJFILES	= $(FILES:%.c=%.o) 
# "%.o: %.c" means that any file ending in .o depends on the same filename ending in .c to be present.

all:	$(NAME)

$(NAME): $(OBJFILES)
	$(CC) $(CFLAGS) $(FILES)

clean:
	rm -f $(OBJFILES)

fclean:
	rm -f $(NAME)

re: fclean all