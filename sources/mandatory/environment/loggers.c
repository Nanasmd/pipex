<<<<<<< HEAD

#include <pipex.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loggers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:18:37 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:18:38 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"
>>>>>>> master

void	log_path(t_pipex *ctl)
{
	if (VERBOSE)
		ft_printf(" => PATH: \"%s\"\n", ctl->path);
}

void	log_paths(t_pipex *ctl)
{
	if (VERBOSE)
	{
		ft_printf(" => PATHS:\n");
		ft_putstr_array(ctl->paths);
		ft_printf("	TOTAL: %d\n", ft_arrlen((void **)ctl->paths));
	}
}
