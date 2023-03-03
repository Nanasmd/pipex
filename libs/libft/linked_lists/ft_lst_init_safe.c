/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_init_safe.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:48:44 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:48:45 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Initializes a linked list or dies trying.
 *
 * @param list The linked list.
 * @param content The content of the new node.
 */
void	ft_lst_init_safe(t_list **list, void *content)
{
	if (list == NULL)
		ft_die(LIST_INIT_REFERENCE_ERR);
	if (*list != NULL)
		ft_die(LIST_INIT_NONEMPTY_ERR);
	ft_lst_init(list, content);
}
