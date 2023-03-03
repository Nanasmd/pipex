/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   left.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:21:34 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:57:42 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

static void	set_tokens(t_pipex *ctl)
{
	ctl->left.tokens = tokenize_or_die(ctl->left.raw);
	ft_add_lalloc_array(&ctl->free_me, (void **)ctl->left.tokens);
}

void	initialize_left(t_pipex *ctl)
{
	ctl->left.raw = ctl->argv[2];
	command_or_die(ctl, ctl->left.raw);
	set_tokens(ctl);
	ctl->left.cmd = ctl->left.tokens[0];
	ctl->left.path = find_left_executable_or_die(ctl);
	ctl->left.flags = ctl->left.tokens + 1;
	log_command(ctl->left.path, ctl->left.flags);
}
