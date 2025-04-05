# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 08:14:49 by ansebast          #+#    #+#              #
#    Updated: 2025/04/05 12:14:37 by ansebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clapTrap
CXX = c++
FLAGS = -Wall -Wextra -Werror -g --std=c++98 ScavTrap.cpp

SRC = ClapTrap.cpp main.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all