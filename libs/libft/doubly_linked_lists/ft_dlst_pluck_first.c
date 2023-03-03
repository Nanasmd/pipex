/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_pluck_first.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:53 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:37:54 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Extracts and returns the trimmed first node of a doubly linked list.
 *
 * @param list The doubly linked list.
 * @return t_dlist* The trimmed node or NULL.
 */
t_dlist	*ft_dlst_pluck_first(t_dlist **list)
{
	t_dlist	*first;
	t_dlist	*second;

	if (list == NULL || *list == NULL)
		return (NULL);
	first = *list;
	second = first->next;
	ft_dlst_trim(first);
	ft_dlst_trim_prev(second);
	*list = second;
	return (first);
}
