NAME = ex03

HEADER = Bureaucrat.hpp	AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

%.o : %.cpp
	${CXX} ${CXXFLAGS} -c $< -o $@

clean :
	$(RM) $(RMFLAG) $(OBJS)
	rm -rf *_shrubbery

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re