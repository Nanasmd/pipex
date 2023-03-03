/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dump_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:41:43 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:41:44 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Read from a file descriptor until GNL_FOUND_EOF or GNL_ERROR.
 *
 * @param fd The file descriptor to be read.
 */
void	ft_dump_fd(int fd)
{
	int		status;
	char	*line;

	while (true)
	{
		status = ft_get_next_line(fd, &line);
		if (status == FT_GNL_ERROR)
			break ;
		ft_putendl(line);
		free(line);
		if (status == FT_GNL_FOUND_EOF)
			break ;
	}
}
