/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_init.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:14 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:37:15 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Initializes a doubly linked list.
 *
 * @param list The doubly linked list.
 * @param content The content of the new node.
 */
void	ft_dlst_init(t_dlist **list, void *content)
{
	*list = ft_dlstnew_safe(content);
}
