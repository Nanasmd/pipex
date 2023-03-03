/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:50:17 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:50:18 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Return last node of a linked list.
 *
 * @param node The first node of the linked list.
 * @return t_list* The last node of the list or NULL.
 */
t_list	*ft_lstlast(t_list *node)
{
	if (node == NULL)
		return (NULL);
	if (node->next == NULL)
		return (node);
	return (ft_lstlast(node->next));
}
