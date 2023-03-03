/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:16:11 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:55:57 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

char	*find_right_executable_or_die(t_pipex *ctl)
{
	char	*command_executable;

	command_executable = find_executable(ctl->right.cmd, ctl->paths);
	if (command_executable == NULL)
		die_cmd(ctl, ctl->right.cmd);
	ft_add_lalloc(&ctl->free_me, command_executable);
	return (command_executable);
}
