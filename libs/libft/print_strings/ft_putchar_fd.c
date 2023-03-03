/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:01:44 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:01:45 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes char c to file descriptor fd.
 *
 * @param c The char to be written.
 * @param fd The file descriptor to write to.
 */
void	ft_putchar_fd(char c, int fd)
{
	ssize_t	write_return;

	write_return = write(fd, &c, 1);
	if (write_return < 0)
		ft_die(WRITE_ERR);
}
