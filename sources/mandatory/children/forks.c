/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:11:55 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:11:56 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

int	fork_or_die(void)
{
	int	pid;

	pid = fork();
	if (pid < 0)
		die();
	return (pid);
}

void	wait_for_left(t_pipex *ctl)
{
	waitpid(ctl->left.pid, NULL, 0);
}

void	wait_for_right(t_pipex *ctl)
{
	waitpid(ctl->right.pid, NULL, 0);
}

void	wait_for_children(t_pipex *ctl)
{
	wait_for_left(ctl);
	wait_for_right(ctl);
}
