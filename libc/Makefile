# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 18:11:28 by jmartin           #+#    #+#              #
#    Updated: 2021/10/13 13:32:18 by jmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	libft.a
CFLAGS		= 	-Wall -Werror -Wextra -c -I
CC			= 	cc
RM			=	rm -f
AR			=	ar rcs # Create an archive from files
FILES		= 	ft_atoi.c \
				ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memcpy.c\
				ft_memset.c \
				ft_memmove.c \
				ft_strchr.c \
				ft_strncmp.c \
				ft_strlen.c \
				ft_tolower.c \
				ft_toupper.c
OBJ	= $(FILES:.c=.o) # Any file ending in .o depends on the same filename ending in .c to be present.

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ): $(FILES)
	$(CC) $(CFLAGS) -c $(FILES)

clean:
	@$(RM) $(OBJ)

# Call previous rule to delete .o and clean program too
fclean: clean
	@$(RM) $(NAME)

re: fclean all