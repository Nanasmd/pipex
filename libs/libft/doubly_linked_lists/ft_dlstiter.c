/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:40:03 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:40:04 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Trasverses every node of a doubly linked list
 * and runs f on each content.
 *
 * @param node The first node of the doubly linked list.
 * @param f The callback that runs on each node of the list.
 */
void	ft_dlstiter(t_dlist *node, void (*f)(void *))
{
	if (node == NULL)
		return ;
	f(node->content);
	if (node->next == NULL)
		return ;
	ft_dlstiter(node->next, f);
}
