CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = materia

SRCS = main.cpp AMateria.cpp Ice.cpp # MateriaSource.cpp  Cure.cpp

HEADERS = AMateria.hpp Ice.hpp #IMateriaSource.hpp MateriaSource.cpp  ICharacter.hpp  Cure.hpp

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