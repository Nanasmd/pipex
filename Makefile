# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 02:23:21 by nasamadi          #+#    #+#              #
#    Updated: 2023/03/03 02:23:38 by nasamadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################################################################################
#                                     CONFIG                                   #
################################################################################

NAME        := pipex
CC          := gcc
FLAGS  := -Wall -Wextra -Werror -O3 
#CCF_DEBUG = -g -fsanitize=leak

MAKE_EXTERNAL := make -C
SAFE_MAKEDIR := mkdir -p
ARCHIVE_AND_INDEX := ar -rcs
COPY := cp
RM		    := rm -f

OBJECTS_PATH :=  ./objects
SOURCES_PATH :=  ./sources
INCLUDES_PATH :=  ./includes
LIBS_PATH := ./libs
LIBFT_PATH :=  $(LIBS_PATH)/libft
LIBFT_INCLUDES = $(LIBFT_PATH)/includes
LIBFT := $(LIBFT_PATH)/libft.a
#HEADER := -I$(LIBFT_INCLUDES) -I$(INCLUDES_PATH)

CLR_RMV		:= \033[0m
RED		    := \033[1;31m
GREEN		:= \033[1;32m
YELLOW		:= \033[1;33m
BLUE		:= \033[1;34m
CYAN 		:= \033[1;36m

################################################################################
#                                 MANDATORY                              #
################################################################################

M_SOURCES_PATH =            $(SOURCES_PATH)/mandatory
M_OBJECTS_PATH =            $(OBJECTS_PATH)/mandatory

M_SOURCES        :=       sources/mandatory/pipes/redirections.c \
                          sources/mandatory/pipes/core.c \
                          sources/mandatory/errors/die_2.c \
                          sources/mandatory/errors/arguments.c \
                          sources/mandatory/errors/die_1.c \
                          sources/mandatory/errors/print_error.c \
                          sources/mandatory/initializers/files.c \
                          sources/mandatory/initializers/environment.c \
                          sources/mandatory/initializers/fourex.c \
                          sources/mandatory/initializers/left.c \
                          sources/mandatory/initializers/children.c \
                          sources/mandatory/initializers/right.c \
                          sources/mandatory/initializers/utils.c \
                          sources/mandatory/children/forks.c \
                          sources/mandatory/children/left.c \
                          sources/mandatory/children/right.c \
                          sources/mandatory/files/open_infile.c \
                          sources/mandatory/files/open.c \
                          sources/mandatory/files/create.c \
                          sources/mandatory/files/close.c \
                          sources/mandatory/files/create_outfile.c \
                          sources/mandatory/commands/find_left.c \
                          sources/mandatory/commands/execute.c \
                          sources/mandatory/commands/tokenize.c \
                          sources/mandatory/commands/find_right.c \
                          sources/mandatory/commands/find.c \
                          sources/mandatory/commands/split.c \
                          sources/mandatory/commands/loggers.c \
                          sources/mandatory/fourex.c \
                          sources/mandatory/cleanup/memory.c \
                          sources/mandatory/environment/paths.c \
                          sources/mandatory/environment/path.c \
                          sources/mandatory/environment/loggers.c 

M_OBJECTS =               $(patsubst $(M_SOURCES_PATH)/%.c, $(M_OBJECTS_PATH)/%.o, $(M_SOURCES))
M_OBJECT_DIRECTORIES =    $(sort $(dir $(M_OBJECTS)))
$(M_OBJECTS_PATH)/%.o: $(M_SOURCES_PATH)/%.c
	$(CC) $(FLAGS) -I./libs/libft/includes -I./includes -c -o $@ $<

all: $(NAME)

${NAME}:	$(M_OBJECTS)
			@echo "$(GREEN)Compilation $(CLR_RMV)of $(YELLOW)$(NAME) $(CLR_RMV)..."
			$(CC) $(FLAGS) -I./libs/libft/includes -I./includes -o $(NAME) $(M_OBJECTS) -L$(LIBFT_PATH) -lft
			@echo "$(GREEN)$(NAME) created[0m ✔️"

clean:
			@ $(RM) *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fclean:		clean
			@ $(RM) $(NAME)
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

re:			fclean all

.PHONY:		all clean fclean re

################################################################################
#                                  BONUS                          #
################################################################################

B_SOURCES_PATH =            $(SOURCES_PATH)/bonus
B_OBJECTS_PATH =            $(OBJECTS_PATH)/bonus

B_SOURCES :=              sources/bonus/main_bonus.c \
                          sources/bonus/pipes/stdin.c \
                          sources/bonus/pipes/write.c \
                          sources/bonus/pipes/file.c \
                          sources/bonus/pipes/core.c \
                          sources/bonus/pipes/stdout.c \
                          sources/bonus/errors/die_2.c \
                          sources/bonus/errors/arguments.c \
                          sources/bonus/errors/die_1.c \
                          sources/bonus/errors/print_error.c \
                          sources/bonus/initializers/hdoc.c \
                          sources/bonus/initializers/nex.c \
                          sources/bonus/initializers/control.c \
                          sources/bonus/children/child.c \
                          sources/bonus/children/forks.c \
                          sources/bonus/children/hdoc.c \
                          sources/bonus/files/open_infile.c \
                          sources/bonus/files/open.c \
                          sources/bonus/files/create.c \
                          sources/bonus/files/close.c \
                          sources/bonus/files/create_outfile.c \
                          sources/bonus/commands/paths.c \
                          sources/bonus/commands/execute.c \
                          sources/bonus/commands/tokenize.c \
                          sources/bonus/commands/find.c \
                          sources/bonus/commands/split.c \
                          sources/bonus/commands/or_die.c \
                          sources/bonus/commands/path.c \
                          sources/bonus/nex.c \
                          sources/bonus/cleanup/memory.c

B_OBJECTS =               $(patsubst $(B_SOURCES_PATH)/%.c, $(B_OBJECTS_PATH)/%.o, $(B_SOURCES))
B_OBJECT_DIRECTORIES =    $(sort $(dir $(B_OBJECTS)))
$(B_OBJECTS_PATH)/%.o: $(B_SOURCES_PATH)/%.c
	$(CC) $(FLAGS) -I./libs/libft/includes -I./includes -c -o $@ $<

allb: $(NAME)

bonus:	$(B_OBJECTS)
			@echo "$(GREEN)Compilation $(CLR_RMV)of $(YELLOW)$(NAME) $(CLR_RMV)..."
			$(CC) $(FLAGS) -I./libs/libft/includes -I./includes -o $(NAME) $(B_OBJECTS) -L$(LIBFT_PATH) -lft
			@echo "$(GREEN)$(NAME) created[0m ✔️"

cleanb:
			@ $(RM) *.o */*.o */*/*.o
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)objs ✔️"

fcleanb:		clean
			@ $(RM) $(NAME)
			@ echo "$(RED)Deleting $(CYAN)$(NAME) $(CLR_RMV)binary ✔️"

reb:			fclean all

.PHONY:		allb bonus cleanb fcleanb reb
