/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_addb_lalloc.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:33:43 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:33:44 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a new node wih the content.
 * If the doubly linked list is initialized, prepends the node to the list.
 * If uninitialized, sets the node as first on the list.
 *
 * @param lalloc A linked list with the pointers of all allocated variables.
 * @param list The doubly linked list.
 * @param content The content of the new node.
 */
void	ft_dlst_addb_lalloc(t_list **lalloc,
			t_dlist **list, void *content)
{
	ft_dlst_cadd_back_lalloc(lalloc, list, content);
}
