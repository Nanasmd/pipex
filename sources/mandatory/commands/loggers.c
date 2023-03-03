/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loggers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:18:20 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:56:03 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

void	log_command(char *command_executable, char **flags)
{
	if (VERBOSE)
	{
		ft_printf(" => EXECUTABLE: %s\n", command_executable);
		ft_printf(" => FLAGS:\n");
		ft_putstr_array(flags);
		ft_printf("	TOTAL: %d\n", ft_arrlen((void **)flags));
	}
}

void	log_fourex(t_pipex *ctl)
{
	if (VERBOSE)
		ft_printf(
			" => Executing \"< %s %s | %s > %s\"\n",
			ctl->infile.path,
			ctl->left.raw,
			ctl->right.raw,
			ctl->outfile.path);
}
