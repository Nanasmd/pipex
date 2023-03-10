/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   right.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:21:41 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:57:45 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

static void	set_tokens(t_pipex *ctl)
{
	ctl->right.tokens = tokenize_or_die(ctl->right.raw);
	ft_add_lalloc_array(&ctl->free_me, (void **)ctl->right.tokens);
}

void	initialize_right(t_pipex *ctl)
{
	ctl->right.raw = ctl->argv[3];
	command_or_die(ctl, ctl->right.raw);
	set_tokens(ctl);
	ctl->right.cmd = ctl->right.tokens[0];
	ctl->right.path = find_right_executable_or_die(ctl);
	ctl->right.flags = ctl->right.tokens + 1;
	log_command(ctl->right.path, ctl->right.flags);
}
