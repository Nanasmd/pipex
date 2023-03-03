/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:50:39 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:50:40 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts the nodes in a linked list.
 *
 * @param node The first node of the linked list.
 * @return int The size of the list.
 */
int	ft_lstsize(t_list *node)
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
