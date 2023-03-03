/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hdoc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:09:47 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:54:33 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"

static void	initialize_files(t_pipex *ctl)
{
	ctl->outfile.path = ctl->argv[ctl->argc - 1];
	ctl->outfile.fd = open_outfile_or_die(ctl);
}

void	initialize_hdoc(t_pipex *ctl)
{
	ctl->arg = 3;
	ctl->limiter = ctl->argv[2];
	initialize_files(ctl);
	get_hdoc(ctl);
}
