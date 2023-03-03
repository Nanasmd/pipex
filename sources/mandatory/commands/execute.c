/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:15:50 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:15:51 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

void	execute_or_die(char *command_path, char **split_cmd, char **envp)
{
	int	execve_return;

	execve_return = execve(command_path, split_cmd, envp);
	if (execve_return < 0)
		die2(command_path);
}
