# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fvieira <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/25 16:24:14 by fvieira           #+#    #+#              #
#    Updated: 2023/05/25 16:24:16 by fvieira          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex03

CXX = c++

CXX_FLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

SRC = main.cpp \
	ClapTrap.cpp \
	FragTrap.cpp \
	ScavTrap.cpp \
	DiamondTrap.cpp

%.o:	%.cpp
	$(CXX) $(CXX_FLAGS) -c $< -o $@

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXX_FLAGS) $(SRC) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.SILENT:
