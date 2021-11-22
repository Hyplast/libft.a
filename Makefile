# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: severi <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 22:33:06 by severi            #+#    #+#              #
#    Updated: 2021/11/22 09:44:47 by severi           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

TEST = test_main.a

SRC = srcs/*.c

INC = srcs/libft.h

OBJ = *.o

#OBJFILES := %.o: %.c Makefile

FLAG = -g -Wall -Wextra -Werror -I. -c

all: $(NAME)

$(NAME): $(OBJ) $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJ): $(SRC)
	@gcc $(FLAG) $(SRC)

test: $(NAME) 
	@gcc $(FLAGS) tests/*.c -o $(TEST) -L. -lft 

.PHONY: all clean fclean re

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	@rm -f $(TEST) 

re: fclean all
