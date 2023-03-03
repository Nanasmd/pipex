/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:08:48 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:08:49 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"

int	create_file_or_die(char *path)
{
	int	open_fd;
	int	create_flags;

	create_flags = O_CREAT | O_WRONLY | O_TRUNC;
	open_fd = open(path, create_flags, CREATE_PERMISSION);
	if (open_fd < 0)
		die2(path);
	return (open_fd);
}
