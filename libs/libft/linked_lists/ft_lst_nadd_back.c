/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_nadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:48:57 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:48:58 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Adds a node to the end of a linked list.
 *
 * @param list The linked list.
 * @param new The node to be added.
 */
void	ft_lst_nadd_back(t_list **list, t_list *new)
{
	ft_lstadd_back(list, new);
}
