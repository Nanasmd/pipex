/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_outfile.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:20:43 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:56:56 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

int	create_outfile_or_die(t_pipex *ctl)
{
	int	open_fd;
	int	create_flags;

	create_flags = O_CREAT | O_WRONLY | O_TRUNC;
	open_fd = open(ctl->outfile.path, create_flags, CREATE_PERMISSION);
	if (open_fd < 0)
	{
		free_memory(ctl);
		die2(ctl->outfile.path);
	}
	return (open_fd);
}
