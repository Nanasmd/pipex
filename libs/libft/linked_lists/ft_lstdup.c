/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:50:08 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:50:09 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	*return_unchanged(void *content)
{
	return (content);
}

/**
 * @brief Creates a copy of the linked list.
 * If it fails in creating any node it clears the list with del.
 *
 * @param node The first node of the linked list.
 * @param del The callback that runs on every node.
 * @return t_dlist* The first node of the cloned list.
 */
t_list	*ft_lstdup(t_list *node, void (*del)(void *))
{
	return (ft_lstmap(node, return_unchanged, del));
}
