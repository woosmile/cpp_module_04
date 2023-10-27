NAME = a.out

CXXFLAGS = -Werror -Wall -Wextra -std=c++98

RM = rm
RMFLAGS = -rf

HEADER = \
AMateria.hpp \
Cure.hpp \
Ice.hpp \
ICharacter.hpp \
Character.hpp \
IMateriaSource.hpp \
MateriaSource.hpp

SRCS = \
AMateria.cpp \
Cure.cpp \
Ice.cpp \
ICharacter.cpp \
Character.cpp \
IMateriaSource.cpp \
MateriaSource.cpp
main.cpp
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