# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmeyer <thmeyer@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/10 14:17:12 by thmeyer           #+#    #+#              #
#    Updated: 2023/10/11 13:41:23 by thmeyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ##################################### #
#               VARIABLES               #
# ##################################### #

NAME		=	form

UNAME		=	$(shell uname)

NOCOLOR		=	\033[0m
BGREEN		=	\033[1;32m

HEADER		=	Bureaucrat.hpp Form.hpp

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

SRC_FILES	=	main.cpp Bureaucrat.cpp Form.cpp

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