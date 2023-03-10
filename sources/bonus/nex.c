/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:10:42 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:44:50 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex_bonus.h"

static void	initialize(t_pipex	*ctl, int argc, char **argv, char **envp)
{
	initialize_control(ctl, argc, argv, envp);
	if (ft_starts_with(ctl->argv[1], HDOC_IDENTIFIER))
		initialize_hdoc(ctl);
	else
		initialize_nex(ctl);
}

static void	handle_children(t_pipex *ctl)
{
	int		children_count;
	char	*child_cmd;

	children_count = ctl->argc - 2;
	while (ctl->arg < children_count)
	{
		child_cmd = ctl->argv[ctl->arg++];
		handle_child(ctl, child_cmd);
	}
}

static void	run_last_cmd(t_pipex *ctl)
{
	stdout_to_file(ctl->outfile.fd);
	execute_or_die(ctl, ctl->last_cmd);
}

int	nex(int argc, char **argv, char **envp)
{
	t_pipex	ctl;

	initialize(&ctl, argc, argv, envp);
	handle_children(&ctl);
	run_last_cmd(&ctl);
	free_memory(&ctl);
	return (EXIT_SUCCESS);
}
