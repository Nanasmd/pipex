/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_left.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:16:05 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:55:54 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

char	*find_left_executable_or_die(t_pipex *ctl)
{
	char	*command_executable;

	command_executable = find_executable(ctl->left.cmd, ctl->paths);
	if (command_executable == NULL)
		die_cmd(ctl, ctl->left.cmd);
	ft_add_lalloc(&ctl->free_me, command_executable);
	return (command_executable);
}
