NAME		= Weapon
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf


FILES		= main

SRC			= $(FILES:=.cpp)
OBJ			= $(SRC:.cpp=.o) 

.PHONY: all clean fclean re bonus norm

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)

%.o: %.cpp $(HEADER)
	@$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
