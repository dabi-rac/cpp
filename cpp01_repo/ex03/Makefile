NAME		= attack
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

FILES		= main Weapon HumanA HumanB


SRC			= $(FILES:=.cpp)


OBJ			= $(FILES:=.o)
HEADER		= Weapon.hpp HumanA.hpp HumanB.hpp

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
