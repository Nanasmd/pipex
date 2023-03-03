/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_die.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:41:38 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:41:39 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Prints error message to STDERR_FILENO and exits with status 1.
 *
 * @param error_message The error message.
 */
void	ft_die(void *error_message)
{
	ft_putstr_fd(ERROR_PREFIX, STDERR_FILENO);
	ft_putendl_fd(error_message, STDERR_FILENO);
	exit(EXIT_FAILURE);
}
