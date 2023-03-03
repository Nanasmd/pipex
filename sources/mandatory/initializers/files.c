/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   files.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:21:18 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:57:36 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

void	initialize_outfile(t_pipex *ctl)
{
	ctl->outfile.path = ctl->argv[4];
	ctl->outfile.fd = create_outfile_or_die(ctl);
}

void	initialize_infile(t_pipex *ctl)
{
	ctl->infile.path = ctl->argv[1];
	ctl->infile.fd = open_infile_or_die(ctl);
}

void	initialize_files(t_pipex *ctl)
{
	initialize_outfile(ctl);
	initialize_infile(ctl);
}
