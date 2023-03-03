/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:50:12 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:50:13 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Trasverses every node of a linked list and runs f on each content.
 *
 * @param node The first node of the linked list.
 * @param f The callback that runs on each node of the list.
 */
void	ft_lstiter(t_list *node, void (*f)(void *))
{
	if (node == NULL)
		return ;
	f(node->content);
	if (node->next == NULL)
		return ;
	ft_lstiter(node->next, f);
}
