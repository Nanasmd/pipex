/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_cadd_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:35:31 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:35:32 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a new node wih the content.
 * If the doubly linked list is initialized, appends the node to the list.
 * If uninitialized, sets the node as first on the list.
 *
 * @param list The doubly linked list.
 * @param content The content of the new node.
 */
void	ft_dlst_cadd_front(t_dlist **list, void *content)
{
	if (list == NULL)
		return ;
	if (*list == NULL)
		return (ft_dlst_init_safe(list, content));
	ft_dlst_append(list, content);
}
