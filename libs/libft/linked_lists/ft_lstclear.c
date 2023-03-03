/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:49:45 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:49:46 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Runs the del function on all the contents of a linked list,
 * frees every node and uninitializes the list.
 *
 * @param list The linked list.
 * @param del The callback that runs on every node.
 */
void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*next;

	if (list == NULL)
		return ;
	while (*list != NULL)
	{
		next = (*list)->next;
		ft_lstdelone(*list, del);
		*list = next;
	}
	list = NULL;
}
