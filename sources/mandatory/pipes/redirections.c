<<<<<<< HEAD

#include <pipex.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redirections.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:21:53 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:21:54 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"
>>>>>>> master

void	stdout_to_pipe(int pipe_fds[2])
{
	dup2(pipe_fds[PIPE_WRITE], STDOUT_FILENO);
}

void	pipe_to_stdin(int pipe_fds[2])
{
	dup2(pipe_fds[PIPE_READ], STDIN_FILENO);
}

void	file_to_stdin(int infile_fd)
{
	dup2(infile_fd, STDIN_FILENO);
}

void	stdout_to_file(int outfile_fd)
{
	dup2(outfile_fd, STDOUT_FILENO);
}
