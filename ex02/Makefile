NAME		= account
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g
RM			= rm -rf

SRCS		= Account.cpp tests.cpp
INCS		= Account.hpp
OBJS		= $(SRCS:.cpp=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re