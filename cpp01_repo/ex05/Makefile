NAME		= harl
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = 

FILES		= main Harl

SRC			= $(FILES:=.cpp)
OBJ			= $(FILES:=.o)  
HEADER		= Harl.hpp

.PHONY: all clean fclean re bonus norm

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)


%.o: %.cpp $(HEADER)
	@$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJ)


fclean: clean
	@$(RM) $(NAME)


re: fclean all
