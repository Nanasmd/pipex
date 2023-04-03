/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:12:48 by vmourtia          #+#    #+#             */
/*   Updated: 2023/04/03 18:22:27 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <pipex_bonus.h>

/*
	The one tricky thing in this function are the "if conditions".
	These conditions are set to prevent the program from waiting 
	for a childpid that is not initialized 
	(as there is no fork if the input file is not found).
*/
void	pipex_wait(t_pipex *pipex)
{
	int		status;

	close_all_pipes(pipex);
	while (--pipex->index >= 0)
		waitpid(pipex->pids[pipex->index], &status, 0);
	close_files(pipex);
	free_pipex(pipex);
}
