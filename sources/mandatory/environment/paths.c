<<<<<<< HEAD

#include <pipex.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paths.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:18:46 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:18:47 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"
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
