/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_append.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:35:12 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:35:13 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a node and appends it to the end of
 * an initialized doubly linked list.
 *
 * @param list The doubly linked list.
 * @param content The content of the new node.
 */
void	ft_dlst_append(t_dlist **list, void *content)
{
	t_dlist	*new;

	if (list == NULL || *list == NULL)
		return ;
	new = ft_dlstnew_safe(content);
	ft_dlstadd_back(list, new);
}
