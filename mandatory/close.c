/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   close.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:11:09 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:21 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	close_files(t_pipex *pipex)
{
	if (pipex->input_file >= 0)
		close(pipex->input_file);
	if (pipex->output_file >= 0)
		close(pipex->output_file);
}

void	close_pipes(t_pipex *pipex)
{
	if (pipex->pipefd[0] >= 0)
		close(pipex->pipefd[0]);
	if (pipex->pipefd[1] >= 0)
		close(pipex->pipefd[1]);
}
