# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 10:59:55 by lmartins          #+#    #+#              #
#    Updated: 2020/01/30 10:59:40 by lmartins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NOME = libft.a

all: $(NOME)

$(NOME):
	@gcc -Wall -Wextra -Werror -o $(NOME) *.c

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NOME)

re: fclean all