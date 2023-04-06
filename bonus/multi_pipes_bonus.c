/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_pipes_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:13:32 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:37 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

static void	create_pipes(t_pipex *pipex)
{
	int	i;

	i = 0;
	while (i < pipex->cmd_nbr - 1)
	{
		if (pipe(pipex->pipefd[i]) < 0)
		{
			close_pipe(pipex->pipefd[i]);
			if (pipex->pipefd[i])
				free(pipex->pipefd[i]);
		}
		i++;
	}
}

static char	*get_bin_paths(char **envp)
{
	int	i;

	if (envp == NULL)
		return (NULL);
	i = 0;
	while (envp[i])
	{
		if (ft_strncmp("PATH", envp[i], 4) == 0)
			break ;
		i++;
	}
	return (envp[i]);
}

int	multi_pipes(int cmdnbr, char **av, char **envp, int hd)
{
	t_pipex	pipex;

	if (init_pipex(&pipex, cmdnbr, hd) < 0)
		return (alert_msg(INIT_ALERT), 0);
	init_input(&pipex, av);
	create_pipes(&pipex);
	pipex.paths = get_bin_paths(envp);
	pipex.bin_paths = ft_split(pipex.paths, ':');
	while (pipex.index < pipex.cmd_nbr)
	{
		child(&pipex, av, envp);
		pipex.index++;
	}
	pipex_wait(&pipex);
	return (0);
}
