<<<<<<< HEAD
#include <pipex_bonus.h>
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   or_die.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:07:58 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:07:59 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"
>>>>>>> master

void	command_or_die(t_pipex *ctl, char *raw_cmd)
{
	char	*str;

	str = raw_cmd;
	str = ft_skip_whitespace(str);
	if (ft_strlen(str) == 0)
		die_cmd(ctl, raw_cmd);
}
