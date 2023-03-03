/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:39:47 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:39:48 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Runs the del function on all the contents of a doubly linked list,
 * frees every node and uninitializes the list.
 *
 * @param list The doubly linked list.
 * @param del The callback that runs on every node.
 */
void	ft_dlstclear(t_dlist **list, void (*del)(void *))
{
	t_dlist	*next;

	if (list == NULL)
		return ;
	while (*list != NULL)
	{
		next = (*list)->next;
		ft_dlstdelone(*list, del);
		*list = next;
	}
	list = NULL;
}
