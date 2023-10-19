CC = c++
NAME = a.out
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = $(wildcard *.cpp)
HEADER =$(wildcard *.hpp)

OBJ = $(SRC:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJ) $(HEADER)
	$(CC) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	

.PHONY: clean fclean all