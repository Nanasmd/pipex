/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:39:59 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:40:00 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	*return_unchanged(void *content)
{
	return (content);
}

/**
 * @brief Creates a copy of the doubly linked list.
 * If it fails in creating any node it clears the list with del.
 *
 * @param node The first node of the doubly linked list.
 * @param del The callback that runs on every node in case of failure.
 * @return t_dlist* The first node of the cloned list.
 */
t_dlist	*ft_dlstdup(t_dlist *node, void (*del)(void *))
{
	return (ft_dlstmap(node, return_unchanged, del));
}
