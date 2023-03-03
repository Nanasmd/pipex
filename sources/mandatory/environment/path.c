/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:18:42 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:52:01 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

static char	*get_clean_path(char **envp)
{
	while (*envp)
	{
		if (ft_starts_with(*envp, PATH_PREFIX))
			return (*envp + PATH_PREFIX_LENGTH);
		envp++;
	}
	return (NULL);
}

char	*get_clean_path_or_die(char **envp)
{
	char	*clean_path;

	clean_path = get_clean_path(envp);
	die_if_null(clean_path);
	return (clean_path);
}
