# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: tblaudez <tblaudez@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/17 14:41:30 by tblaudez      #+#    #+#                  #
#    Updated: 2020/09/22 13:49:08 by tblaudez      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME=replace

SRC= src/replace.cpp
OBJ= $(SRC:%.cpp=%.o)
INCLUDE_DIR= -I includes/

CC= /usr/bin/clang++
CFLAGS= -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDE_DIR) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDE_DIR) -c $< -o $@

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

run: all
	@printf "Test 1 ---------------------------------\n"
	./$(NAME) tests/powerpuff.txt "Utonium" "Atomium"
	diff tests/powerpuff.txt tests/powerpuff.txt.replace || true
	
	@printf "\n\nTest 2----------------\n"
	./$(NAME) tests/powerpuff.txt "a" "X"
	diff tests/powerpuff.txt tests/powerpuff.txt.replace || true

	@printf "\n\nTest 3-----------------------\n"
	./$(NAME) tests/powerpuff.txt "a" "aaaAAAA"
	diff tests/powerpuff.txt tests/powerpuff.txt.replace || true

.PHONY: all clean fclean re run
