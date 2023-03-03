/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:02:31 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:02:32 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints a string to standard out.
 *
 * @param str The C-string to be printed.
 */
void	ft_putstr(char *str)
{
	ft_putstr_fd(str, STDOUT_FILENO);
}
