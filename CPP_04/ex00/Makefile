# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/22 10:18:23 by thmeyer           #+#    #+#              #
#    Updated: 2023/09/25 13:46:55 by thmeyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ##################################### #
#               VARIABLES               #
# ##################################### #

NAME		=	animal

UNAME		=	$(shell uname)

NOCOLOR		=	\033[0m
BGREEN		=	\033[1;32m

HEADER		=	Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp

MAKEFILE	=	Makefile

CC			=	c++
CFLAGS 		= 	-Wall -Wextra -Werror
CPPFLAGS	=	-std=c++98

RM 			= 	rm -rf


# ##################################### #
#                 PATHS                 #
# ##################################### #

OBJS_DIRS	=	.objs/


# ##################################### #
#                SOURCES                #
# ##################################### #

SRC_FILES	=	main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp

SRCS	=	$(SRC_FILES)


# ##################################### #
#                OBJECTS                #
# ##################################### #

OBJS	=	$(addprefix $(OBJS_DIRS),	\
								$(SRC_FILES:.cpp=.o))

$(OBJS_DIRS)%.o: $(SRCS_PATH)%.cpp $(MAKEFILE) $(HEADER)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<


# ##################################### #
#                 RULES                 #
# ##################################### #

all:		$(OBJS_DIRS) $(NAME)

$(OBJS_DIRS):
			mkdir -p $(OBJS_DIRS)

$(NAME):	$(OBJS)
ifeq ($(UNAME),Linux)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(OBJS)
	@echo "$(BGREEN)Linux Compilation Done$(NOCOLOR)"
else ifeq ($(UNAME),Darwin)
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(OBJS)
	@echo "$(BGREEN)Mac OS Compilation Done$(NOCOLOR)"
endif

run:
			$(MAKE) all
			./$(NAME)

clean:
			$(RM) $(OBJS)
			@echo "$(BGREEN)Clean done$(NOCOLOR)"

fclean:
			$(MAKE) clean
			$(RM) $(NAME)
			$(RM) $(OBJS_DIRS)
			@echo "$(BGREEN)Fclean done$(NOCOLOR)"

re:
			$(MAKE) fclean
			$(MAKE) all

.PHONY:		all run clean fclean re