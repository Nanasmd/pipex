/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:14:53 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:21 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	ft_wait(t_pipex *pipex)
{
	int		status;

	close_pipes(pipex);
	if (pipex->exec_cmd_input == 1)
		waitpid(pipex->child1_pid, &status, 0);
	if (pipex->exec_cmd_output == 1)
		waitpid(pipex->child2_pid, &status, 0);
	close_files(pipex);
	free_pipex(pipex);
	return (0);
}
