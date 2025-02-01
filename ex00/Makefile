PRE = ./

SOURCE = megaphone.c

SOURCES = ${addprefix $(PRE), $(SOURCE)}

NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RD_LINE_FLAG = -lreadline

OBJ = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $@ $^

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

clean: 
	rm -f $(OBJ)
        
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
