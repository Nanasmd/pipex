/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:49:37 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:49:38 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Adds a node to the end of a linked list.
 *
 * @param list The linked list.
 * @param new The node to be added.
 */
void	ft_lstadd_back(t_list **list, t_list *new)
{
	if (list == NULL)
		return ;
	if (*list == NULL)
	{
		*list = new;
		return ;
	}
	ft_lstlast(*list)->next = new;
}
