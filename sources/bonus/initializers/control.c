<<<<<<< HEAD
#include <pipex_bonus.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:09:42 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:09:43 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"
>>>>>>> master

void	initialize_control(t_pipex *ctl, int argc, char **argv, char **envp)
{
	ctl->argc = argc;
	ctl->argv = argv;
	ctl->envp = envp;
	ctl->last_cmd = ctl->argv[ctl->argc - 2];
	ctl->paths = NULL;
	ctl->free_me = NULL;
}
