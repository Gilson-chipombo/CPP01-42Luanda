CXX = c++
CXXFLAGS =  -Wall -g -Wextra -Werror -std=c++98

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp
OBJS = $(SRCS:.cpp=.o)
NAME = Unnecessary_violence

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $(NAME)

#%.o: %.cpp $(HEADERS)
#	$(C) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(NAME)