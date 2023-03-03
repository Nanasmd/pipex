/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_pluck_safe.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:38:10 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:38:11 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Extracts the zero-indexed node of a doubly linked list.
 * If list is uninitialized or empty returns,
 * terminates the program with an error.
 * If index is out of bounds, terminates the program with an error.
 *
 * @param list The doubly linked list.
 * @param index The index of the node.
 * @return t_dlist* The node.
 */
t_dlist	*ft_dlst_pluck_safe(t_dlist **list, int index)
{
	t_dlist	*target;

	target = ft_dlst_get_safe(list, index);
	if (target == NULL)
		return (NULL);
	ft_dlst_delink(target);
	ft_dlst_trim(target);
	return (target);
}
