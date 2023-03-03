/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_get_safe.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:35:57 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:35:58 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Gets the zero-indexed node of a doubly linked list.
 * If list is uninitialized or empty returns,
 * terminates the program with an error.
 * If index is out of bounds, terminates the program with an error.
 *
 * @param list The doubly linked list.
 * @param index The index of the node.
 * @return t_dlist* The node.
 */
t_dlist	*ft_dlst_get_safe(t_dlist **list, int index)
{
	if (list == NULL || *list == NULL)
		ft_die(DLIST_GET_SAFE_LIST_ERR);
	if (ft_dlst_index_out_of_bounds(list, index))
		ft_die(DLIST_GET_SAFE_INDEX_ERR);
	return (ft_dlst_get(list, index));
}
