/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_prepend.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:38:21 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:38:22 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a node and prepends it to the beginning
 * of a doubly linked list.
 *
 * @param list The doubly linked list.
 * @param content The content of the new node.
 */
void	ft_dlst_prepend(t_dlist **list, void *content)
{
	t_dlist	*new;

	if (list == NULL || *list == NULL)
		return ;
	new = ft_dlstnew_safe(content);
	ft_dlstadd_front(list, new);
}
