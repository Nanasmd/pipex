/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:35:44 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:35:45 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Lienarly searches the linked list for the node
 * and returns it if it finds it.
 *
 * @param list The doubly linked list.
 * @param node The node to be searched.
 * @return t_dlist* The node or NULL.
 */
t_dlist	*ft_dlst_find(t_dlist **list, t_dlist *node)
{
	t_dlist	*_list;

	_list = *list;
	while (_list != NULL)
	{
		if (_list == node)
			return (node);
		_list = _list->next;
	}
	return (NULL);
}
