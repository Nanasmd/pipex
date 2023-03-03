/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_infile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:20:54 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:20:55 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

static void	exists_or_die(t_pipex *ctl)
{
	int	exists;

	exists = access(ctl->infile.path, F_OK);
	if (exists < 0)
	{
		free_memory(ctl);
		die3(ctl->infile.path, EXIT_FAILURE);
	}
}

static void	read_or_die(t_pipex *ctl)
{
	int	can_read;

	can_read = access(ctl->infile.path, R_OK);
	if (can_read < 0)
	{
		free_memory(ctl);
		die3(ctl->infile.path, EXIT_SUCCESS);
	}
}

int	open_infile_or_die(t_pipex *ctl)
{
	exists_or_die(ctl);
	read_or_die(ctl);
	return (open_file_or_die(ctl->infile.path));
}
