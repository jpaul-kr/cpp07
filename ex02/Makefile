NAME = array
CC = c++ -std=c++98
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
RM = rm -rf

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)
