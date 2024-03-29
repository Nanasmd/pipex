/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:13:54 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:37 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "pipex_bonus.h"
# include <signal.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

/*
	The char *str is malloc.
	So, it needs to be freed.
*/
typedef struct s_list {
	char			*str;
	struct s_list	*next;
}	t_list;

typedef struct s_gnl {
	char	*line;
	char	*buffer;
	size_t	nbytes;
	int		fd;
}	t_gnl;

/* get_next_line.c */
char	*get_next_line(int fd);

/* memory.c */
t_list	*get_last_memory_element(t_list *memory);
t_list	*memory_new_element(char *buffer, size_t nbytes);
void	add_back_to_memory(t_list **memory, t_gnl *gnl);

/* extract.c */
void	extract_line(t_list *memory, t_gnl *gnl);

/* clear.c */
void	free_memory(t_list **memory);
void	clear_memory(t_list **memory);

#endif