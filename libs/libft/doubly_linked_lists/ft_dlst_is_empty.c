/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_is_empty.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:19 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:37:20 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Checks if the doubly linked list is empty.
 *
 * @param list The doubly linked list.
 * @return true The list doesn't have any nodes.
 * @return false The list has at least one node.
 */
bool	ft_dlst_is_empty(t_dlist **list)
{
	return (*list == NULL);
}
