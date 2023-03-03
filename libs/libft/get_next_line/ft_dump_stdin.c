/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dump_stdin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:42:02 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:42:03 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Read from STDIN until GNL_FOUND_EOF or GNL_ERROR.
 */
void	ft_dump_stdin(void)
{
	ft_dump_fd(STDIN_FILENO);
}
