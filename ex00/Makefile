# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/10 13:53:46 by tlassere          #+#    #+#              #
#    Updated: 2024/05/20 16:19:30 by tlassere         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			::= c++
CXXFLAGS	::= -Wall -Wextra -Werror -std=c++98
NAME		::= Mommy_when_I_grow_up_I_want_to_be_a_bureaucrat 
SOURCES		::= main.cpp Bureaucrat.cpp
OBJS		::= $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
