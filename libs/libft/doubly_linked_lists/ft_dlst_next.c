/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_next.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:46 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:37:47 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns the next node.
 *
 * @param node The node to be skipped.
 * @return t_dlist* The next node or NULL.
 */
t_dlist	*ft_dlst_next(t_dlist *node)
{
	if (node == NULL)
		return (NULL);
	if (node->next == NULL)
		return (NULL);
	return (node->next);
}
