/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_pipes_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 16:54:38 by valentin          #+#    #+#             */
/*   Updated: 2023/04/03 18:21:03 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex_bonus.h>

/* 
	file1 cmd1 | cmd2 | cmd3 | cmd4 file2
	ac = 7
	cmd_nbr = 7 - 3 = 4
	pipe_nbr = cmd_nbr - 1
*/
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
