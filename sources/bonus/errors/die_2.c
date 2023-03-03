/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   die_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:08:29 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:54:09 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"

void	die5(char *location, char *message, int exit_status)
{
	print_error(location, message);
	exit(exit_status);
}

void	die6(t_pipex *ctl, char *location)
{
	free_memory(ctl);
	die2(location);
}

void	die_cmd(t_pipex *ctl, char *raw_cmd)
{
	print_error(raw_cmd, ERR_NO_CMD);
	free_memory(ctl);
	exit(EKEYEXPIRED);
}
