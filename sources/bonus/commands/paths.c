<<<<<<< HEAD
#include <pipex_bonus.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:08:06 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:08:07 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"
>>>>>>> master

char	**get_paths_or_die(char **envp)
{
	char	*clean_path;
	char	**paths;

	clean_path = get_clean_path_or_die(envp);
	paths = ft_split(clean_path, ':');
	die_if_null(paths);
	return (paths);
}
