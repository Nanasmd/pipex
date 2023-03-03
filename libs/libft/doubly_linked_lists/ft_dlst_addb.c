/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_addb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:34:21 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:34:22 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a new node wih the content.
 * If the doubly linked list is initialized, prepends the node to the list.
 * If uninitialized, sets the node as first on the list.
 *
 * @param list The doubly linked list.
 * @param content The content of the new node.
 */
void	ft_dlst_addb(t_dlist **list, void *content)
{
	ft_dlst_cadd_back(list, content);
}
