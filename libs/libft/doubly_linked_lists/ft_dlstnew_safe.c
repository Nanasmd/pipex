/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew_safe.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:40:36 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:40:37 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates an isolated and allocated node of a doubly linked list
 * or dies trying.
 *
 * @param content The content of the new node.
 * @return t_dlist* The new node.
 */
t_dlist	*ft_dlstnew_safe(void *content)
{
	t_dlist	*list;

	list = (t_dlist *)ft_salloc(sizeof(t_dlist));
	list->content = content;
	ft_dlst_trim(list);
	return (list);
}
