# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 10:59:55 by lmartins          #+#    #+#              #
#    Updated: 2020/02/07 12:01:44 by lmartins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


FILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c \
ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c
OBJS = $(FILES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = a.out

LIB_NAME = libft.a
LIB_FLAGS = -L. -lft

RM = rm -f

ranlib: $(LIB_NAME)
	@ranlib $(LIB_NAME)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	ranlib
	@$(CC) $(CFLAGS) $(LIB_FLAGS)

$(LIB_NAME):	$(OBJS)
	@ar rc $(LIB_NAME) $(OBJS)

all:	$(NAME)

clean:
	@$(RM) $(OBJS)

lclean:
	@$(RM) $(LIB_NAME)

fclean:	clean lclean
	@$(RM) a.exe

re:	fclean all

.PHONY:	all ranlib lib clean lclean fclean re