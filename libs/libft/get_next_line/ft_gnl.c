/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gnl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:42:17 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:42:18 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Reads an entire line from a file indexed by a file descriptor fd,
 * then alocates a string with the contents of that line
 * without the linebreak '\n' and points *line to it.
 *
 * Returns 1 if successfull, 0 if it reached the end of the file
 * and -1 if an error occurred.
 *
 * @param fd The file descriptor to read from.
 * @param line The line pointer address.
 * @return int The exit status.
 */
int	ft_gnl(int fd, char **line)
{
	return (ft_get_next_line(fd, line));
}
