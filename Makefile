# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: severi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 22:33:06 by severi            #+#    #+#              #
#    Updated: 2021/11/10 10:36:27 by severi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

TEST = test_main.a

SRC = srcs/*.c

OBJ = *.o

#OBJFILES := %.o: %.c Makefile

FLAG = -Wall -Wextra -Werror -I. -c

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ): $(SRC)
	@gcc $(FLAG) $(SRC)

test: $(NAME) 
	@gcc -Wall -Wextra -Werror -o $(TEST) srcs/libft.h \
 tests/*.c -L. -lft

.PHONY: all clean fclean re

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(TEST) 

re: fclean all
