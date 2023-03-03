/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_link.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:27 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:37:28 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Inserts the node between previous and next,
 * inserting it into the doubly linked list.
 *
 * @param previous The previous node to link to.
 * @param node The node to be linked.
 * @param next The next node to link to.
 */
void	ft_dlst_link(t_dlist *previous, t_dlist *node, t_dlist *next)
{
	node->prev = previous;
	node->next = next;
	if (previous != NULL)
		previous->next = node;
	if (next != NULL)
		next->prev = node;
}
