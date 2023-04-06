/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:13:05 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:37 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

static char	*get_exe_path(char **bin_paths, char *cmd)
{
	char	*tmp;
	char	*cmd_path;

	if (access(cmd, F_OK | X_OK) == 0)
		return (cmd);
	if (bin_paths == NULL)
		return (NULL);
	while (*bin_paths)
	{
		tmp = ft_strjoin(*bin_paths, "/");
		if (tmp == NULL)
			return (NULL);
		cmd_path = ft_strjoin(tmp, cmd);
		if (cmd_path == NULL)
			return (free(tmp), NULL);
		free(tmp);
		if (access(cmd_path, F_OK | X_OK) == 0)
			return (cmd_path);
		free(cmd_path);
		bin_paths++;
	}
	return (NULL);
}

static int	first_child_io(t_pipex *pipex)
{
	if (pipex->exec_cmd_input == 1)
	{
		if (pipex->input_file >= 0)
		{
			dup2(pipex->input_file, STDIN_FILENO);
			close(pipex->input_file);
		}
		dup2(pipex->pipefd[pipex->index][1], STDOUT_FILENO);
		return (1);
	}
	else
	{
		close_all(pipex);
		return (-1);
	}
}

static int	last_child_io(t_pipex *pipex, char **av)
{
	init_output(pipex, av);
	if (pipex->exec_cmd_output == 1)
	{
		dup2(pipex->pipefd[pipex->index - 1][0], STDIN_FILENO);
		dup2(pipex->output_file, STDOUT_FILENO);
		close(pipex->output_file);
		return (1);
	}
	else
	{
		close_all(pipex);
		return (-1);
	}
}

static void	child_io(t_pipex *pipex)
{
	dup2(pipex->pipefd[pipex->index - 1][0], STDIN_FILENO);
	dup2(pipex->pipefd[pipex->index][1], STDOUT_FILENO);
}

void	child(t_pipex *pipex, char **av, char **envp)
{
	pipex->pids[pipex->index] = fork();
	if (pipex->pids[pipex->index] == 0)
	{
		if (pipex->index == 0 && first_child_io(pipex) < 0)
			exit_child(pipex, av, NULL, NULL);
		else if (pipex->index == pipex->cmd_nbr - 1
			&& last_child_io(pipex, av) < 0)
			exit_child(pipex, av, NULL, NULL);
		else if (pipex->index != 0 && pipex->index != pipex->cmd_nbr - 1)
			child_io(pipex);
		close_all(pipex);
		pipex->cmd_args = ft_split(av[pipex->index + 2], ' ');
		if (!pipex->cmd_args)
			exit_child(pipex, av, NULL, NULL);
		pipex->exe_path = get_exe_path(pipex->bin_paths, pipex->cmd_args[0]);
		if (!pipex->exe_path)
			exit_child(pipex, av, pipex->cmd_args[0], CMD_ALERT);
		if (execve(pipex->exe_path, pipex->cmd_args, envp) < 0)
			exit_child(pipex, av, EXECVE_ALERT, NULL);
	}
	else if (pipex->pids[pipex->index] < 0)
		alert_msg(FORK_ALERT);
}
