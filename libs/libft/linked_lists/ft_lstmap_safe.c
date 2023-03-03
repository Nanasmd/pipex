/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:50:21 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:50:22 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a new linked list and runs f on each content or dies trying.
 *
 * @param node The first node of the linked list.
 * @param f The callback that runs on each node of the list.
 * @return t_list* The first node of the mapped list or NULL.
 */
t_list	*ft_lstmap_safe(t_list *node, void *(*f)(void *))
{
	t_list	*list_map;

	if (node == NULL)
		return (NULL);
	list_map = ft_lstnew_safe(f(node->content));
	list_map->next = ft_lstmap_safe(node->next, f);
	return (list_map);
}
