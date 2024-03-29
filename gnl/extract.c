/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extract.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:13:42 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:59 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	alloc_line(t_list *memory, t_gnl *gnl)
{
	int	i;
	int	line_length;

	line_length = 0;
	while (memory)
	{
		i = 0;
		while (memory->str[i])
		{
			if (memory->str[i] == '\n')
			{
				line_length++;
				break ;
			}
			line_length++;
			i++;
		}
		memory = memory->next;
	}
	gnl->line = malloc(sizeof(char) * (line_length + 1));
}

static void	fill_line(t_list *memory, t_gnl *gnl)
{
	int	i;
	int	j;

	i = 0;
	while (memory)
	{
		j = 0;
		while (memory->str[j])
		{
			gnl->line[i] = memory->str[j];
			if (memory->str[j] == '\n')
			{
				i++;
				break ;
			}
			i++;
			j++;
		}
		memory = memory->next;
	}
	gnl->line[i] = '\0';
}

void	extract_line(t_list *memory, t_gnl *gnl)
{
	if (memory == NULL)
		return ;
	alloc_line(memory, gnl);
	if (gnl->line == NULL)
		return ;
	fill_line(memory, gnl);
}
