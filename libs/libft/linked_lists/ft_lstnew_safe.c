/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_safe.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:50:29 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:50:30 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates an isolated and allocated node of a linked list or dies trying.
 *
 * @param content The content of the new node.
 * @return t_list* The new node.
 */
t_list	*ft_lstnew_safe(void *content)
{
	t_list	*list;

	list = (t_list *)ft_salloc(sizeof(t_list));
	list->content = content;
	list->next = NULL;
	return (list);
}
