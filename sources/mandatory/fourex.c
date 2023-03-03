/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fourex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:23:11 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:45:05 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/pipex.h"

int	fourex(int argc, char **argv, char **envp)
{
	t_pipex	ctl;

	initialize_fourex(&ctl, argc, argv, envp);
	handle_left(&ctl);
	handle_right(&ctl);
	return (EXIT_SUCCESS);
}

int	main(int argc, char **argv, char **envp)
{
	check_argc(argc);
	return (fourex(argc, argv, envp));
}
