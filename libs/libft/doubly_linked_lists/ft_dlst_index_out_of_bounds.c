/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_index_out_of_bounds.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:03 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:37:04 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Checks if the index exceedes the bounds of a doubly linked list.
 *
 * @param list The doubly linked list.
 * @param index The index of the node.
 * @return true The list has a node with that index.
 * @return false The list doen't have a node with that index.
 */
bool	ft_dlst_index_out_of_bounds(t_dlist **list, int index)
{
	int	max_index;

	if (list == NULL)
		return (true);
	if (index < 0)
		return (true);
	max_index = ft_dlst_max_index(*list);
	if (max_index == DLIST_BAD_INDEX_CODE)
		return (true);
	if (index > max_index)
		return (true);
	return (false);
}
