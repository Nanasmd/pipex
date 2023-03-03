/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdout.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:10:16 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:10:17 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"

void	stdout_to_pipe(int pipe_fds[2])
{
	dup2(pipe_fds[PIPE_WRITE], STDOUT_FILENO);
}

void	pipe_to_stdout(int pipe_fds[2])
{
	dup2(pipe_fds[PIPE_READ], STDOUT_FILENO);
}
