/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:41:27 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:41:28 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates an isolated and allocated node of a doubly linked list.
 *
 * @param content The content of the new node.
 * @return t_dlist* The new node.
 */
t_dlist	*ft_dlstnew(void *content)
{
	t_dlist	*list;

	list = (t_dlist *)malloc(sizeof(t_dlist));
	if (list == NULL)
		return (NULL);
	list->content = content;
	ft_dlst_trim(list);
	return (list);
}
