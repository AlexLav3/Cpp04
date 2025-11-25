NAME = Animal
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -Wshadow 

SOURCES = main.cpp Animal.cpp Cat.cpp Dog.cpp
		
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECTS) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all