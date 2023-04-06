/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:13:25 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:37 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

static int	init_pipefd(t_pipex *pipex)
{
	int	i;

	pipex->pipefd = malloc(sizeof(int *) * (pipex->cmd_nbr - 1));
	if (!pipex->pipefd)
		return (-1);
	i = 0;
	while (i < pipex->cmd_nbr - 1)
	{
		pipex->pipefd[i] = malloc(sizeof(int) * 2);
		if (!pipex->pipefd[i])
			return (-1);
		pipex->pipefd[i][0] = 0;
		pipex->pipefd[i][1] = 0;
		i++;
	}
	return (0);
}

int	init_pipex(t_pipex *pipex, int cmdnbr, int hd)
{
	pipex->heredoc = hd;
	pipex->index = 0;
	pipex->cmd_nbr = cmdnbr;
	pipex->exec_cmd_input = 1;
	pipex->exec_cmd_output = 1;
	pipex->input_file = -1;
	pipex->output_file = -1;
	pipex->pids = malloc(sizeof(int) * pipex->cmd_nbr);
	if (pipex->pids == NULL)
		return (-1);
	if (init_pipefd(pipex) < 0)
		return (-1);
	pipex->paths = NULL;
	pipex->exe_path = NULL;
	pipex->bin_paths = NULL;
	pipex->cmd_args = NULL;
	return (0);
}

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
	pipex->output_file = open(av[pipex->index + 3],
			O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (pipex->output_file < 0)
	{
		error_msg(av[pipex->index + 3]);
		pipex->exec_cmd_output = 0;
	}
}
