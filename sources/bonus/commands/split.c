/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:08:12 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:53:49 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"

char	**split_command_or_die(char *raw_command)
{
	char	**split_command;

	split_command = ft_split(raw_command, ' ');
	die_if_null(split_command);
	return (split_command);
}
