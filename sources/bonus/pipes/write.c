/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:14:17 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:14:20 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/pipex_bonus.h"

void	str_to_pipe(int pipe_fds[2], char *str)
{
	ssize_t	ret;

	ret = write(pipe_fds[PIPE_WRITE], str, ft_strlen(str));
	if (ret == -1)
	{
		perror("write");
		exit(EXIT_FAILURE);
	}
}
