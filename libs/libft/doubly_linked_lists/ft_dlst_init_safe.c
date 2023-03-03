/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_init_safe.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:10 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:37:11 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Initializes a doubly linked list or dies trying.
 *
 * @param list The doubly linked list.
 * @param content The content of the new node.
 */
void	ft_dlst_init_safe(t_dlist **list, void *content)
{
	if (list == NULL)
		ft_die(DLIST_INIT_REFERENCE_ERR);
	if (*list != NULL)
		ft_die(DLIST_INIT_NONEMPTY_ERR);
	ft_dlst_init(list, content);
}
