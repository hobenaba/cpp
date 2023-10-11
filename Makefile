CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = attack

SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJECT = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJECT)
	@$(CC) $(CFLAGS) $(OBJECT) -o $(NAME)
	@echo "\033[0;35mcompiled !!!!\033[0m"

clean : 
	@rm -rf $(OBJECT)
	@echo "\033[1;36mall clean\033[0m"
fclean : clean
	@rm -rf $(NAME)

re : fclean all

.SILENT : $(OBJECT)