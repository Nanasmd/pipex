/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 07:41:45 by vmourtia          #+#    #+#             */
/*   Updated: 2023/04/03 18:17:19 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex_bonus.h>

void	exit_child(t_pipex *pipex, char **av, char *msg1, char *msg2)
{
	if (msg1 != NULL)
		alert_msg(msg1);
	if (msg2 != NULL)
		alert_msg(msg2);
	if (pipex->heredoc == 1)
		free_args(av);
	free_child(pipex);
	free_pipex(pipex);
	exit(1);
}
