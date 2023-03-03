/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:18:50 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:18:51 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

static void	help_and_die(void)
{
	ft_putstr(HELP_MSG);
	exit(EXIT_SUCCESS);
}

void	check_argc(int argc)
{
	if (argc == 5)
		return ;
	help_and_die();
}
