CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -MMD -I. -std=c++11 
NAME = PmergeMe 
SRCS =	$(shell ls *.cpp)	
DEPS = $(SRCS:.cpp=.d)
OBJS = $(SRCS:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME) 
clean:
	rm -f $(OBJS) $(DEPS)
fclean: clean
	rm -f $(NAME)
re: clean fclean all
.PHONY: all clean fclean re
.SILENT: all $(NAME) clean fclean re 
-include : $(DEPS)
