/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:21:00 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:21:01 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex.h"

int	open_file_or_die(char *path)
{
	int	open_fd;
	int	open_flags;

	open_flags = O_RDONLY;
	open_fd = open(path, open_flags);
	if (open_fd < 0)
		die2(path);
	return (open_fd);
}
