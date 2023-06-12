# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyungjup <hyungjup@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/12 21:52:56 by hyungjup          #+#    #+#              #
#    Updated: 2023/06/12 22:02:07 by hyungjup         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++
CFLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)$(NAME) created!"

%.o : %.cpp
	@${CC} ${CFLAG} -c $< -o $@

clean :
	@$(RM) $(RMFLAG) $(OBJS)
	@echo "$(YELLOW)object files deleted!"

fclean : clean
	@$(RM) $(NAME)
	@echo "$(RED)all deleted"

re : fclean all

.PHONY : all clean fclean re

RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[0;33m
