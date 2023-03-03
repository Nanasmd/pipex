/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_prepend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:49:19 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:49:20 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a node and appends it to the beginning of a linked list.
 *
 * @param list The linked list.
 * @param content The content of the new node.
 */
void	ft_lst_prepend(t_list **list, void *content)
{
	t_list	*new;

	if (list == NULL || *list == NULL)
		return ;
	new = ft_lstnew_safe(content);
	ft_lstadd_front(list, new);
}
