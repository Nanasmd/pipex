/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hdoc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:07:39 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:07:40 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"

static void	get_hdoc_stream(t_pipex *ctl, int pipe[2])
{
	int		status;
	char	*line;

	while (true)
	{
		ft_putstr(HDOC_FEED);
		status = ft_get_next_line(STDIN_FILENO, &line);
		if (status == GNL_ERROR)
			die2(ERR_GNL);
		if (ft_streq(line, ctl->limiter))
		{
			free(line);
			free_memory(ctl);
			exit(EXIT_SUCCESS);
		}
		line = ft_strjoin_free(line, "\n");
		str_to_pipe(pipe, line);
		free(line);
	}
}

void	get_hdoc(t_pipex *ctl)
{
	pid_t	pid;
	int		pipe[2];

	pipe_or_die(pipe);
	pid = fork_or_die();
	if (pid != CHILD_PROCESS_ID)
	{
		get_hdoc_stream(ctl, pipe);
		return ;
	}
	pipe_to_stdin(pipe);
	close_pipe(pipe);
	wait(NULL);
}
