# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pevangel <pevangel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/11 11:14:10 by pevangel          #+#    #+#              #
#    Updated: 2023/10/16 12:04:39 by pevangel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	=	clang
CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

RM	=	rm -f

AR	=	ar -rcs

INCLUDE	=	libft.h
SOURCES	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_tolower.c \
			ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcpy.c \
			ft_memcmp.c ft_memset.c ft_strchr.c ft_strlcat.c ft_toupper.c \
			ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_calloc.c ft_strrchr.c \
			ft_memmove.c ft_strdup.c ft_strnstr.c ft_strjoin.c ft_putstr_fd.c \
			ft_strtrim.c ft_substr.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJECTS	=	$(SOURCES:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJECTS) $(INCLUDE)
			$(AR) $(NAME) $(OBJECTS)

.c.o:	$(CC) (CFLAGS) -I$(INCLUDE) -c $< -o $(<:.c=.o)

clean:
		$(RM) $(OBJECTS)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re
