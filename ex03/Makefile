# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: leaugust <leaugust@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/03 05:35:45 by leaugust          #+#    #+#              #
#    Updated: 2025/09/26 15:52:57 by leaugust         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap
CC	 = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

SRC_DIR =
OBJ_DIR = obj/
INC_DIR = include/

RESET		= \033[0m
PURPLE		= \033[38;5;083m
PINK		= \033[38;5;208m
BLUE		= \033[38;5;053m
UP			= \033[A
CUT			= \033[K

SRC_FILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

SRC_PATH = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJ_PATH = $(addprefix $(OBJ_DIR), $(OBJ_FILES))

all: $(NAME)
	@printf "$(BLUE)Welcome to EX03 of CPP03\n$(RESET)"

$(NAME): $(OBJ_PATH)
	@echo "$(PURPLE)Compiling [$(NAME)]...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJ_PATH) -o $(NAME)
	@echo "$(PINK)Finished [$(NAME)]$(RESET)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	@echo "$(PURPLE)Compiling [$@]...$(RESET)"
	@$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<
	@printf "$(UP)$(CUT)"
	@echo "$(PINK)Finished [$@]$(RESET)"
	@printf "$(UP)$(CUT)"

clean:
	@if [ -d "$(OBJ_DIR)" ]; then \
	rm -rf $(OBJ_DIR); \
	echo "$(BLUE)Deleting all objects from /ex03...$(RESET)"; else \
	echo "No objects to remove from /ex03."; \
	fi;

fclean: clean
	@if [ -f "$(NAME)" ]; then \
	rm -f $(NAME); \
	echo "$(BLUE)Deleting $(NAME) from ex03...$(RESET)"; else \
	echo "No Executable to remove from ex03."; \
	fi;

re: fclean all

.PHONY: all clean fclean re