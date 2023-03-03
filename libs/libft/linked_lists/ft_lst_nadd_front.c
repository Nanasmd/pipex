/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_nadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:49:03 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:49:04 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Adds a node to the start of a linked list.
 *
 * @param list The linked list.
 * @param new The node to be added.
 */
void	ft_lst_nadd_front(t_list **list, t_list *new)
{
	ft_lstadd_front(list, new);
}
