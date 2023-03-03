/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:39:52 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:39:53 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Runs the del function on the contents of a node of
 * a doubly linked list, then frees it.
 *
 * @param node The first node of the doubly linked list.
 * @param del The callback that runs on every node.
 */
void	ft_dlstdelone(t_dlist *node, void (*del)(void *))
{
	if (node == NULL)
		return ;
	del(node->content);
	free(node);
}
