# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 18:11:28 by jmartin           #+#    #+#              #
#    Updated: 2021/10/13 08:12:54 by jmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libft.a
CFLAGS		= 	-Wall -Werror -Wextra
CC			= 	cc
RM			=	rm -f
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
OBJFILES	= $(FILES:%.c=%.o) # Any file ending in .o depends on the same filename ending in .c to be present.

all: $(NAME)

$(NAME): $(OBJFILES)
	$(CC) -o $(NAME) $(OBJFILES)

clean:
	$(RM) $(OBJFILES)

# Call previous rule to delete .o and clean program too
fclean: clean
	$(RM) $(NAME)

re: fclean all