/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:49:55 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:49:56 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	*return_unchanged(void *content)
{
	return (content);
}

/**
 * @brief Creates a copy of the linked list or dies trying.
 *
 * @param node The first node of the linked list.
 * @return t_dlist* The first node of the cloned list.
 */
t_list	*ft_lstdup_safe(t_list *node)
{
	return (ft_lstmap_safe(node, return_unchanged));
}
