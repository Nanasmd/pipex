<<<<<<< HEAD
#include <pipex_bonus.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:07:30 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:13:45 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"
>>>>>>> master

void	handle_child(t_pipex *ctl, char *raw_cmd)
{
	pid_t	pid;
	int		pipe[2];

	pipe_or_die(pipe);
	pid = fork_or_die();
	if (pid == CHILD_PROCESS_ID)
	{
		stdout_to_pipe(pipe);
		close_pipe(pipe);
		execute_or_die(ctl, raw_cmd);
		return ;
	}
	pipe_to_stdin(pipe);
	close_pipe(pipe);
	waitpid(pid, NULL, 0);
}
