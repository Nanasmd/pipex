/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:13:09 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:37 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

void	close_files(t_pipex *pipex)
{
	if (pipex->input_file >= 0)
		close(pipex->input_file);
	if (pipex->output_file >= 0)
		close(pipex->output_file);
}

void	close_pipe(int	*pipefd)
{
	if (pipefd[0] >= 0)
		close(pipefd[0]);
	if (pipefd[1] >= 0)
		close(pipefd[1]);
}

void	close_all_pipes(t_pipex *pipex)
{
	int	i;

	i = 0;
	while (i < pipex->cmd_nbr - 1 && pipex->pipefd)
	{
		if (pipex->pipefd[i])
			close_pipe(pipex->pipefd[i]);
		i++;
	}
}

/*
	Close all pipes and files.
*/
void	close_all(t_pipex *pipex)
{
	close_all_pipes(pipex);
	close_files(pipex);
}
