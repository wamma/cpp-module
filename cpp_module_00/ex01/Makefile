# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 21:52:56 by hyungjup          #+#    #+#              #
#    Updated: 2023/06/14 16:27:16 by hyungjup         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

HEADER = Phonebook.hpp \
		Contact.hpp
CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = main.cpp \
		Phonebook.cpp \
		Contact.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	${CC} ${CFLAG} -c $< -o $@

clean :
	$(RM) $(RMFLAG) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re