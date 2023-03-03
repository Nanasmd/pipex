/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:08:20 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:54:03 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"

static void	help_and_die(void)
{
	ft_putstr(HELP_MSG);
	exit(EXIT_SUCCESS);
}

void	check_argc(int argc)
{
	if (argc >= 5)
		return ;
	help_and_die();
}
