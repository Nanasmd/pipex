/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:49:51 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:49:52 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Runs the del function on the contents of a node of a linked list,
 * then frees it.
 *
 * @param node The first node of the linked list.
 * @param del The callback that runs on every node.
 */
void	ft_lstdelone(t_list *node, void (*del)(void *))
{
	if (node == NULL)
		return ;
	del(node->content);
	free(node);
}
