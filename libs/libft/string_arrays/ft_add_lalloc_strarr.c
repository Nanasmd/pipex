/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_lalloc_strarr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:06:49 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:06:50 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Add the allocated pointer array and all of its addresses to the lalloc.
 *
 * @param lalloc A linked list with the pointers of all allocated variables.
 * @param allocated_strarr An arbitrary, NULL-terminated C-string array.
 */
void	ft_add_lalloc_strarr(t_list **lalloc, char **allocated_strarr)
{
	ft_add_lalloc_array(lalloc, (void **)allocated_strarr);
}
