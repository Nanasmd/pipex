/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_node_in_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:50 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:37:51 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Lienarly searches the linked list for the node
 * and returns true if it finds it.
 *
 * @param list The doubly linked list.
 * @param node The node to be searched.
 * @return true The node is in the list.
 * @return false The node is not in the list.
 */
bool	ft_dlst_node_in_list(t_dlist **list, t_dlist *node)
{
	t_dlist	*node_in_list;

	node_in_list = ft_dlst_find(list, node);
	if (node_in_list == NULL)
		return (false);
	return (true);
}
