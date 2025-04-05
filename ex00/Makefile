# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ansebast <ansebast@student.42luanda.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/24 08:14:49 by ansebast          #+#    #+#              #
#    Updated: 2025/04/01 07:11:18 by ansebast         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clapTrap
CXX = c++
FLAGS = -Wall -Wextra -Werror -g --std=c++98

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