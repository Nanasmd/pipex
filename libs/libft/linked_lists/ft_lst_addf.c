/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_addf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:47:47 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:47:48 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a new node wih the content.
 * If the linked list is initialized, appends the node to the list.
 * If uninitialized, sets the node as first on the list.
 *
 * @param list The linked list.
 * @param content The content of the new node.
 */
void	ft_lst_addf(t_list **list, void *content)
{
	ft_lst_cadd_front(list, content);
}
