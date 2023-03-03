/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:12:00 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:55:11 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

static void	redirect_descriptors(t_pipex *ctl)
{
	file_to_stdin(ctl->infile.fd);
	stdout_to_pipe(ctl->pipe_fds);
	close_pipes_fds(ctl->pipe_fds);
	close_or_die(ctl->infile.fd);
}

static void	initialize(t_pipex *ctl)
{
	initialize_left(ctl);
	initialize_infile(ctl);
}

void	handle_left(t_pipex *ctl)
{
	ctl->left.pid = fork_or_die();
	if (ctl->left.pid != CHILD_PROCESS_ID)
		return ;
	initialize(ctl);
	redirect_descriptors(ctl);
	execute_or_die(ctl->left.path, ctl->left.tokens, ctl->envp);
	free_memory(ctl);
}
