/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:38:55 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:38:56 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Adds a node to the start of a doubly linked list.
 *
 * @param list The doubly linked list.
 * @param new The node to be added.
 */
void	ft_dlstadd_front(t_dlist **list, t_dlist *new)
{
	if (list == NULL || new == NULL)
		return ;
	if (*list != NULL)
		(*list)->prev = new;
	new->next = *list;
	ft_dlst_trim_prev(new);
	*list = new;
}
