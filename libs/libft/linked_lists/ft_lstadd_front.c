/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:49:41 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:49:42 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Adds a node to the start of a linked list.
 *
 * @param list The linked list.
 * @param new The node to be added.
 */
void	ft_lstadd_front(t_list **list, t_list *new)
{
	if (list == NULL || new == NULL)
		return ;
	new->next = *list;
	*list = new;
}
