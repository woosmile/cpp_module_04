NAME = a.out

CXXFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm
RMFLAGS = -rf

HEADER = \
Animal.hpp \
Cat.hpp \
Dog.hpp \
Brain.hpp

SRCS = \
Animal.cpp \
Cat.cpp \
Dog.cpp \
main.cpp \
Brain.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS) $(HEADER)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

clean :
	$(RM) $(RMFLAGS) $(OBJS)

fclean : clean
	$(RM) $(RMFLAGS) $(NAME)

re : fclean all

.PHONY : all clean fclean re