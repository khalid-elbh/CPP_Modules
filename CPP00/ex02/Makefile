NAME = Account
CXX = c++
CXXFLAGS = -Wextra -Werror -Wall -std=c++98

SRCS = tests.cpp Account.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)
fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : re all clean fclean
