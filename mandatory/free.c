/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 18:14:37 by nasamadi          #+#    #+#             */
/*   Updated: 2023/04/06 18:15:21 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

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

void	free_pipex(t_pipex *pipex)
{
	int	k;

	k = 0;
	while (pipex->bin_paths[k])
		free(pipex->bin_paths[k++]);
	free(pipex->bin_paths);
}
