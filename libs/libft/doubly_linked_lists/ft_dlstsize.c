/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:41:32 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:41:33 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts the nodes in a doubly linked list.
 *
 * @param node The first node of the doubly linked list.
 * @return int The size of the linked list.
 */
int	ft_dlstsize(t_dlist *node)
{
	int	list_size;

	if (node == NULL)
		return (0);
	list_size = 1;
	while (node->next != NULL)
	{
		list_size++;
		node = node->next;
	}
	return (list_size);
}
