/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_cadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:48:10 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:48:11 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Creates a new node wih the content.
 * If the linked list is initialized, prepends the node to the list.
 * If uninitialized, sets the node as first on the list.
 *
 * @param list The linked list.
 * @param content The content of the new node.
 */
void	ft_lst_cadd_back(t_list **list, void *content)
{
	if (list == NULL)
		return ;
	if (*list == NULL)
		return (ft_lst_init_safe(list, content));
	ft_lst_prepend(list, content);
}
