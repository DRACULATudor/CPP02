NAME = out1
CC = g++ -o -g
CFLAGZ = -Wall -Wextra -Werror -std=c++98 -Iinclude
SRCS = 	main.cpp Fixed.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGZ) -g -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC)	$(CFLAGZ)	-o	$(NAME)	$(OBJS) 

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)
	
re: fclean all