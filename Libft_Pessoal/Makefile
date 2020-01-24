# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmartins <lmartins@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/24 10:59:55 by lmartins          #+#    #+#              #
#    Updated: 2020/01/24 10:59:56 by lmartins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NOME = rush-02

all: $(NOME)

$(NOME):
	@gcc -Wall -Wextra -Werror -o $(NOME) *.c

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NOME)

re: fclean all