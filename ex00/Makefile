# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/09 07:27:56 by jhouyet           #+#    #+#              #
#    Updated: 2024/06/09 07:30:14 by jhouyet          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= animal

SRC_DIR 	= src
INC_DIR		= include
OBJ_DIR 	= obj

SRC 		= 	$(SRC_DIR)/Animal.cpp \
				$(SRC_DIR)/main.cpp
				
OBJ			= $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC 			= c++
RM 			= rm -f
CPPFLAGS 	= -Wall -Wextra -Werror -std=c++98
INCS 		= -I$(INC_DIR) -I.
	
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CPPFLAGS) $(INCS) -c $< -o $@

clean:
	$(RM) -r $(OBJ_DIR)

fclean: clean
	$(RM) -r $(OBJ_DIR)
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re