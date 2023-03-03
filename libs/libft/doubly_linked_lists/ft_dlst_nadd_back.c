/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_nadd_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:34 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:37:35 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Adds a node to the end of a doubly linked list.
 *
 * @param list The doubly linked list.
 * @param new The node to be added.
 */
void	ft_dlst_nadd_back(t_dlist **list, t_dlist *new)
{
	ft_dlstadd_back(list, new);
}
