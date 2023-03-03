/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_lstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:46:56 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:46:57 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Frees the char pointer of a length string.
 *
 * @param free_me The length string to be freed.
 */
void	ft_free_lstr(t_lstr *free_me)
{
	if (free_me != NULL)
		free(free_me->ptr);
}
