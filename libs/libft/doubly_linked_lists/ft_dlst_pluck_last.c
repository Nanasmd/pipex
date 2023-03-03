/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_pluck_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:59 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:38:00 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Extracts and returns the trimmed last node of a doubly linked list.
 *
 * @param list The doubly linked list.
 * @return t_dlist* The trimmed node or NULL.
 */
t_dlist	*ft_dlst_pluck_last(t_dlist **list)
{
	t_dlist	*last;
	t_dlist	*second_last;

	if (list == NULL || *list == NULL)
		return (NULL);
	last = ft_dlstlast(*list);
	second_last = last->prev;
	ft_dlst_trim_next(second_last);
	if (second_last == NULL)
		*list = NULL;
	ft_dlst_trim(last);
	return (last);
}
