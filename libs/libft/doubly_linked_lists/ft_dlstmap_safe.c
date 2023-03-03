/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstmap_safe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:40:26 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:40:27 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a new doubly linked list
 * and runs f on each content or dies trying.
 *
 * @param node The first node of the doubly linked list.
 * @param f The callback that runs on each node of the list.
 * @return t_dlist* The first node of the mapped list.
 */
t_dlist	*ft_dlstmap_safe(t_dlist *node, void *(*f)(void *))
{
	t_dlist	*list_map;

	if (node == NULL)
		return (NULL);
	list_map = ft_dlstnew_safe(f(node->content));
	list_map->next = ft_dlstmap_safe(node->next, f);
	if (list_map->next != NULL)
		list_map->next->prev = list_map;
	return (list_map);
}
