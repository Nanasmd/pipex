<<<<<<< HEAD

#include <pipex.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fourex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:21:26 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:21:27 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"
>>>>>>> master

void	initialize_fourex(t_pipex *ctl, int argc, char **argv, char **envp)
{
	ctl->argc = argc;
	ctl->argv = argv;
	ctl->envp = envp;
	ctl->free_me = NULL;
	pipe_or_die(ctl->pipe_fds);
	initialize_environment(ctl);
}
