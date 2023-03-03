/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_prev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:38:26 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:38:27 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns the previous node.
 *
 * @param node The node to be skipped.
 * @return t_dlist* The previous node or NULL.
 */
t_dlist	*ft_dlst_prev(t_dlist *node)
{
	if (node == NULL)
		return (NULL);
	if (node->prev == NULL)
		return (NULL);
	return (node->prev);
}
