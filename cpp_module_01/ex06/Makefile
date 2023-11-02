NAME = harlFilter

HEADER = Harl.hpp
CC = c++
CFLAG = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = main.cpp Harl.cpp

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