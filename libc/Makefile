# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmartin <jmartin@student.42lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 18:11:28 by jmartin           #+#    #+#              #
#    Updated: 2021/10/14 15:56:00 by jmartin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLORS
GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

NAME 		= 	libft.a
CFLAGS		= 	-Wall -Werror -Wextra -I. -c
CC			= 	gcc
RM			=	rm -f
AR			=	ar -rcs # Create an archive from files
FILES		= 	ft_atoi.c \
				ft_bzero.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memcmp.c \
				ft_memcpy.c\
				ft_memchr.c \
				ft_memset.c \
				ft_memmove.c \
				ft_strrchr.c \
				ft_strchr.c \
				ft_strncmp.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_tolower.c \
				ft_toupper.c
OBJ			= 	$(FILES:.c=.o) # Any file ending in .o depends on the same filename ending in .c to be present.

.PHONY : all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo "[$(GREEN)created$(RESET)]: *.o files & $(NAME)"

$(OBJ): $(FILES)
	@$(CC) $(CFLAGS) $(FILES)

clean:
	@$(RM) $(OBJ)
	@echo "[$(RED)deleted$(RESET)]: *.o files"

# Call previous rule to delete .o and clean program too
fclean: clean
	@$(RM) $(NAME)
	@echo "[$(RED)deleted$(RESET)]: $(NAME)"

re: fclean all