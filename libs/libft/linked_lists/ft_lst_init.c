/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:48:52 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:48:53 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Initializes a linked list.
 *
 * @param list The linked list.
 * @param content The content of the new node.
 */
void	ft_lst_init(t_list **list, void *content)
{
	*list = ft_lstnew_safe(content);
}
