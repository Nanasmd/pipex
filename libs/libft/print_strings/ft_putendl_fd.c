/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:02:05 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:02:06 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes string s to file descriptor fd followed by an endline.
 *
 * @param str The C-string to be printed.
 * @param fd The file descriptor to write to.
 */
void	ft_putendl_fd(char *str, int fd)
{
	ft_putstr_fd(str, fd);
	ft_putchar_fd('\n', fd);
}
