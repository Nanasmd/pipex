/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:13:45 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:59 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	init_gnl(t_gnl *gnl, int fd, t_list **memory)
{
	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, &fd, 0) < 0)
	{
		if (memory != NULL)
			free_memory(memory);
		return (0);
	}
	gnl->fd = fd;
	gnl->nbytes = 1;
	gnl->line = NULL;
	gnl->buffer = NULL;
	return (1);
}

static int	find_newline(t_list *memory)
{
	t_list	*memptr;
	int		i;

	if (memory == NULL)
		return (0);
	memptr = get_last_memory_element(memory);
	i = 0;
	while (memptr->str && memptr->str[i])
	{
		if (memptr->str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

static void	read_and_save(t_list **memory, t_gnl *gnl)
{
	while (find_newline(*memory) == 0 && gnl->nbytes != 0)
	{
		gnl->buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (gnl->buffer == NULL)
			return ;
		gnl->nbytes = read(gnl->fd, gnl->buffer, BUFFER_SIZE);
		if ((*memory == NULL && gnl->nbytes == 0) || (int)gnl->nbytes == -1)
		{
			free(gnl->buffer);
			return ;
		}
		gnl->buffer[gnl->nbytes] = '\0';
		add_back_to_memory(memory, gnl);
		free(gnl->buffer);
		gnl->buffer = NULL;
	}
}

char	*get_next_line(int fd)
{
	static t_list	*memory = NULL;
	t_gnl			gnl;

	if (init_gnl(&gnl, fd, &memory) == 0)
		return (NULL);
	read_and_save(&memory, &gnl);
	if (memory == NULL)
		return (NULL);
	extract_line(memory, &gnl);
	clear_memory(&memory);
	if (gnl.line[0] == '\0')
	{
		free_memory(&memory);
		memory = NULL;
		free(gnl.line);
		return (NULL);
	}
	return (gnl.line);
}
