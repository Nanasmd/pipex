/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdup_safe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:39:55 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:39:56 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

static void	*return_unchanged(void *content)
{
	return (content);
}

/**
 * @brief Creates a copy of the doubly linked list or dies trying.
 *
 * @param node The first node of the doubly linked list.
 * @return t_dlist* The first node of the cloned list.
 */
t_dlist	*ft_dlstdup_safe(t_dlist *node)
{
	return (ft_dlstmap_safe(node, return_unchanged));
}
