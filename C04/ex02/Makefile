CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = protectAnimals

SRCS = main.cpp Animal.cpp Dog.cpp WrongAnimal.cpp Cat.cpp WrongCat.cpp Brain.cpp

HEADERS = Animal.hpp Dog.hpp WrongAnimal.hpp Cat.hpp WrongCat.hpp Brain.hpp

OBJECT = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECT) $(HEADERS)
	@$(CC) $(CPPFLAGS) $(OBJECT) -o $(NAME)
	@echo "\033[0;35mcompiled !!!!\033[0m"

clean : 
	@rm -rf $(OBJECT)
	@echo "\033[1;36mall clean\033[0m"
fclean : clean
	@rm -rf $(NAME)

re : fclean all

.SILENT : $(OBJECT)