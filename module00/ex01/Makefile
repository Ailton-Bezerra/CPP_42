NAME 	:= phonebook
CC      := c++ -std=c++98
CFLAGS  := -Wextra -Wall -Werror

SRCS     := Contact.cpp PhoneBook.cpp main.cpp
DIR_OBJ		:= .objs
OBJS		:= $(SRCS:%.c=$(DIR_OBJ)/%.o)

GREEN		:= \033[1;32m
END 		:= \033[0m

all: $(NAME)

$(DIR_OBJ)/%.o:%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $(NAME)
	@echo "$(GREEN)Done!$(END)"

clean:
	@rm -rf $(DIR_OBJ)
	@echo -n "$(GREEN)Cleaned$(END)"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(GREEN) all!$(END)"
	
re: fclean all

.PHONY: all clean fclean re