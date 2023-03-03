/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_max_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:30 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:37:31 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns the maximum index of a doubly linked list.
 * If the list is empty, returns DLIST_BAD_INDEX_CODE.
 *
 * @param node The first node of the doubly linked list.
 * @return int The maximum index of the list or DLIST_BAD_INDEX_CODE.
 */
int	ft_dlst_max_index(t_dlist *node)
{
	if (node == NULL)
		return (DLIST_BAD_INDEX_CODE);
	return (ft_dlstsize(node) - 1);
}
