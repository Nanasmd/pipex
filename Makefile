# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 18:14:56 by nasamadi          #+#    #+#              #
#    Updated: 2023/04/06 18:14:59 by nasamadi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# MANDATORY SRCS

SRCS =			mandatory/main.c \
				mandatory/init.c \
				mandatory/free.c \
				mandatory/close.c \
				mandatory/wait.c \
				mandatory/child.c \
				mandatory/alert.c \
				mandatory/exit.c

LIBFT  =		libft/ft_split.c \
				libft/ft_strlen.c \
				libft/ft_strjoin.c \
				libft/ft_strncmp.c \
				libft/ft_strchr.c
				
# BONUS SRCS

BONUS_SRCS =	bonus/main_bonus.c \
				bonus/init_bonus.c \
				bonus/free_bonus.c \
				bonus/close_bonus.c \
				bonus/wait_bonus.c \
				bonus/child_bonus.c \
				bonus/alert_bonus.c \
				bonus/exit_bonus.c \
				bonus/handle_heredoc_bonus.c \
				bonus/multi_pipes_bonus.c \
				bonus/args_bonus.c

GNL =			gnl/get_next_line.c \
				gnl/clear.c \
				gnl/extract.c \
				gnl/memory.c \

# OBJECTS

OBJS = 			${SRCS:c=o} ${LIBFT:c=o}

BONUS_OBJS = 	${BONUS_SRCS:c=o} ${LIBFT:c=o} ${GNL:c=o}

# OTHER VARIABLES 

NAME =			pipex

CC =			cc

CFLAGS =		-Wall -Werror -Wextra

INC =			-I./includes/

RM =			rm -f

# TARGETS

NAME =			pipex

CC =			cc

CFLAGS =		-Wall -Werror -Wextra

INC =			-I./includes/

RM =			rm -f

# TARGETS

all :			$(NAME)

%.o : %.c
				${CC} ${CFLAGS} ${INC} -c $< -o $@ -g

bonus :			$(BONUS_OBJS)
				@test -f $(NAME) && echo "make: Nothing to be done for 'all'." || $(CC) $(BONUS_OBJS) -o $(NAME)

$(NAME) :		${OBJS}
				${CC} ${OBJS} -o ${NAME}

clean :
				${RM} ${OBJS} $(BONUS_OBJS)

fclean :		clean
				${RM} ${NAME}

re :			fclean all

rebonus :		fclean bonus

.PHONY :		all clean fclean bonus re rebonus
