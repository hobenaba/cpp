CC= c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = RPN

SRCS = main.cpp RPN.cpp

OBJECT = $(SRCS:.cpp=.o)

HEADERS = RPN.hpp

all : $(NAME) 

%.o : %.cpp $(HEADERS)
	@$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJECT) 
	@$(CC) $(CPPFLAGS) $(OBJECT) -o $(NAME)
	@echo "\033[0;35mcompiled !!!!\033[0m"

clean : 
	@rm -rf $(OBJECT)
	@echo "\033[1;36mall clean\033[0m"
	
fclean : clean
	@rm -rf $(NAME)

re : fclean all

.SILENT : $(OBJECT)