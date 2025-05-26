NAME 	:= diamondtrap
CC      := c++ -std=c++98
CFLAGS  := -Wextra -Wall -Werror -Wshadow

SRCS_DIR	:= ./
SRCS		:= $(addprefix $(SRCS_DIR), main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp)
DIR_OBJ		:= .objs
OBJS		:= $(SRCS:$(SRCS_DIR)%.cpp=$(DIR_OBJ)/%.o)

GREEN		:= \033[1;32m
END 		:= \033[0m

all: $(NAME)

$(DIR_OBJ)/%.o: $(SRCS_DIR)/%.cpp
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