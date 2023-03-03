/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:38:48 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:38:49 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Adds a node to the end of a doubly linked list.
 *
 * @param list The doubly linked list.
 * @param new The node to be added.
 */
void	ft_dlstadd_back(t_dlist **list, t_dlist *new)
{
	t_dlist	*last;

	if (list == NULL)
		return ;
	if (*list == NULL)
	{
		*list = new;
		return ;
	}
	last = ft_dlstlast(*list);
	last->next = new;
	new->prev = last;
	ft_dlst_trim_next(new);
}
