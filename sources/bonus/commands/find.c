<<<<<<< HEAD
#include <pipex_bonus.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:07:54 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:07:55 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"
>>>>>>> master

static char	*build_executable_path(char *path, char *command)
{
	char	*executable;

	executable = ft_strjoin(path, "/");
	executable = ft_strjoin_free(executable, command);
	return (executable);
}

char	*find_executable(char *command, char **paths)
{
	char	*executable;
	int		can_execute;

	while (*paths)
	{
		executable = build_executable_path(*paths, command);
		can_execute = access(executable, X_OK);
		if (can_execute == 0)
			return (executable);
		free(executable);
		paths++;
	}
	return (NULL);
}

char	*find_executable_or_die(char *command, char **paths)
{
	char	*command_executable;

	command_executable = find_executable(command, paths);
	if (command_executable == NULL)
		die5(command, "command not found", EXIT_FAILURE);
	return (command_executable);
}
