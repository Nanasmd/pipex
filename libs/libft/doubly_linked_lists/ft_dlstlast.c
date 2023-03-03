/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:40:09 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:40:10 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Return last node of a doubly linked list.
 *
 * @param node The first node of the doubly linked list.
 * @return t_dlist* The last node or null.
 */
t_dlist	*ft_dlstlast(t_dlist *node)
{
	if (node == NULL)
		return (NULL);
	if (node->next == NULL)
		return (node);
	return (ft_dlstlast(node->next));
}
