/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environment.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:21:14 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:57:33 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

static void	set_paths(t_pipex *ctl)
{
	ctl->paths = get_paths_or_die(ctl->envp);
	ft_add_lalloc_array(&ctl->free_me, (void **)ctl->paths);
}

void	initialize_environment(t_pipex *ctl)
{
	ctl->path = get_clean_path_or_die(ctl->envp);
	set_paths(ctl);
	log_path(ctl);
	log_paths(ctl);
}
