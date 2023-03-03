/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_pluck_first.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:49:12 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:49:13 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Extracts and returns the trimmed first node of a linked list.
 *
 * @param list The linked list.
 * @return t_dlist* The trimmed node or NULL.
 */
t_list	*ft_lst_pluck_first(t_list **list)
{
	t_list	*first;
	t_list	*second;

	if (list == NULL || *list == NULL)
		return (NULL);
	first = *list;
	second = first->next;
	ft_lst_trim(first);
	*list = second;
	return (first);
}
