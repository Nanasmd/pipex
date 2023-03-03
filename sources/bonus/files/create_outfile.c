<<<<<<< HEAD
#include <pipex_bonus.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_outfile.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:08:42 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:08:43 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"
>>>>>>> master

int	create_outfile_or_die(t_pipex *ctl)
{
	int	open_fd;
	int	flags;

	flags = O_CREAT | O_WRONLY | O_TRUNC;
	open_fd = open(ctl->outfile.path, flags, CREATE_PERMISSION);
	if (open_fd < 0)
	{
		free_memory(ctl);
		die2(ctl->outfile.path);
	}
	return (open_fd);
}

int	open_outfile_or_die(t_pipex *ctl)
{
	int	open_fd;
	int	flags;

	flags = O_CREAT | O_WRONLY | O_APPEND;
	open_fd = open(ctl->outfile.path, flags, CREATE_PERMISSION);
	if (open_fd < 0)
	{
		free_memory(ctl);
		die2(ctl->outfile.path);
	}
	return (open_fd);
}
