/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_delink.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:35:39 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:35:40 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Links the node's previous and next nodes to each other,
 * separating it from the doubly linked list.
 *
 * @param node The node to be delinked.
 */
void	ft_dlst_delink(t_dlist *node)
{
	t_dlist	*previous;
	t_dlist	*next;

	previous = node->prev;
	next = node->next;
	if (previous != NULL)
		previous->next = next;
	if (next != NULL)
		next->prev = previous;
}
