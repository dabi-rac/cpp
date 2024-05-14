NAME		= sed
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

OBJDIR = .objFiles

FILES		= main sed

SRC			= $(FILES:=.cpp)
OBJ			= $(FILES:=.o)  
HEADER		= sed.hpp


.PHONY: all clean fclean re bonus norm

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)


%.o: %.cpp $(HEADER)
	@$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)


fclean: clean
	@$(RM) $(NAME)


re: fclean all
