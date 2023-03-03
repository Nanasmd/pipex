/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_cadd_back_lalloc.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:35:16 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:35:17 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a new node wih the content.
 * If the doubly linked list is initialized, prepends the node to the list.
 * If uninitialized, sets the node as first on the list.
 * Then adds node to lalloc.
 *
 * @param lalloc A linked list with the pointers of all allocated variables.
 * @param list The doubly linked list.
 * @param content The content of the new node.
 */
void	ft_dlst_cadd_back_lalloc(t_list **lalloc,
			t_dlist **list, void *content)
{
	t_dlist	*new;

	if (list == NULL)
		return ;
	new = ft_dlstnew_safe(content);
	ft_dlstadd_back(list, new);
	ft_add_lalloc(lalloc, new);
}
