/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_pluck.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:38:17 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:38:18 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Extracts the zero-indexed node of a doubly linked list.
 * If list is uninitialized or empty returns, returns NULL.
 * If index is out of bounds, returns NULL.
 *
 * @param list The doubly linked list.
 * @param index The index of the node.
 * @return t_dlist* The node.
 */
t_dlist	*ft_dlst_pluck(t_dlist **list, int index)
{
	t_dlist	*target;

	if (list == NULL || *list == NULL)
		return (NULL);
	if (index == 0)
		return (ft_dlst_pluck_first(list));
	if (index == ft_dlst_max_index(*list))
		return (ft_dlst_pluck_last(list));
	target = ft_dlst_get(list, index);
	if (target == NULL)
		return (NULL);
	ft_dlst_delink(target);
	ft_dlst_trim(target);
	return (target);
}
