/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   die_2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:19:53 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:19:54 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

void	die5(char *location, char *message, int exit_status)
{
	print_error(location, message);
	exit(exit_status);
}

void	die_cmd(t_pipex *ctl, char *raw_cmd)
{
	print_error(raw_cmd, ERR_NO_CMD);
	free_memory(ctl);
	exit(EKEYEXPIRED);
}
