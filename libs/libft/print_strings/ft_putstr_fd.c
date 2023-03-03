/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:02:22 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:02:23 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes string s to file descriptor fd without null terminator.
 *
 * @param str The C-string to be printed.
 * @param fd The file descriptor to write to.
 */
void	ft_putstr_fd(char *str, int fd)
{
	if (str == NULL)
		return ;
	write(fd, str, ft_strlen(str));
}
