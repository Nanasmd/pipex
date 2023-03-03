<<<<<<< HEAD
#include <pipex_bonus.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   forks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:07:34 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:07:35 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"
>>>>>>> master

pid_t	fork_or_die(void)
{
	pid_t	pid;

	pid = fork();
	if (pid < 0)
		die();
	return (pid);
}
