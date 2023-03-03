/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_nadd_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:42 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:37:43 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Adds a node to the start of a doubly linked list.
 *
 * @param list The doubly linked list.
 * @param new The node to be added.
 */
void	ft_dlst_nadd_front(t_dlist **list, t_dlist *new)
{
	ft_dlstadd_front(list, new);
}
