/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_lalloc_array.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:42:26 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:42:27 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Add the allocated pointer array and all of its addresses to the lalloc.
 *
 * @param lalloc A linked list with the pointers of all allocated variables.
 * @param allocated_array An arbitrary, NULL-terminated array.
 */
void	ft_add_lalloc_array(t_list **lalloc, void **allocated_array)
{
	if (allocated_array == NULL)
		return ;
	ft_add_lalloc(lalloc, allocated_array);
	while (*allocated_array != NULL)
	{
		ft_add_lalloc(lalloc, *allocated_array);
		allocated_array++;
	}
}
