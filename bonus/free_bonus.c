/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:13:18 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:37 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	free_child(t_pipex *pipex)
{
	int	k;

	k = 0;
	if (pipex->cmd_args)
	{
		while (pipex->cmd_args[k])
			free(pipex->cmd_args[k++]);
		free(pipex->cmd_args);
	}
}

void	free_bin_paths(t_pipex *pipex)
{
	int	i;

	i = 0;
	while (pipex->bin_paths[i])
	{
		if (pipex->bin_paths[i])
			free(pipex->bin_paths[i++]);
	}
	free(pipex->bin_paths);
}

void	free_pipefd(t_pipex *pipex)
{
	int	i;

	i = 0;
	while (i < pipex->cmd_nbr - 1)
	{
		if (pipex->pipefd[i])
			free(pipex->pipefd[i++]);
	}
	free(pipex->pipefd);
}

void	free_pipex(t_pipex *pipex)
{
	if (pipex->bin_paths)
		free_bin_paths(pipex);
	if (pipex->pipefd)
		free_pipefd(pipex);
	if (pipex->pids)
		free(pipex->pids);
}

void	free_args(char **args)
{
	int	i;

	if (args == NULL)
		return ;
	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}
