/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:14:42 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:14:43 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	init_input(t_pipex *pipex, char **av)
{
	pipex->input_file = open(av[1], O_RDONLY);
	if (pipex->input_file < 0)
	{
		error_msg(av[1]);
		pipex->exec_cmd_input = 0;
	}
}

void	init_output(t_pipex *pipex, char **av)
{
	pipex->output_file = open(av[4], O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (pipex->output_file < 0)
	{
		error_msg(av[4]);
		pipex->exec_cmd_output = 0;
	}
}

void	init_pipex(t_pipex *pipex)
{
	pipex->exec_cmd_input = 1;
	pipex->exec_cmd_output = 1;
	pipex->input_file = -1;
	pipex->output_file = -1;
	pipex->child1_pid = -1;
	pipex->child2_pid = -1;
	pipex->pipefd[0] = 0;
	pipex->pipefd[1] = 0;
	pipex->paths = NULL;
	pipex->exe_path = NULL;
	pipex->bin_paths = NULL;
	pipex->cmd_args = NULL;
}
