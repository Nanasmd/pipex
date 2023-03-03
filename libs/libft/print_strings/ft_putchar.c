/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:01:49 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:01:50 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Writes char c to file descriptor standard out (1).
 *
 * @param c The char to be written.
 */
void	ft_putchar(char c)
{
	ft_putchar_fd(c, STDOUT_FILENO);
}
