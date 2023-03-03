/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_is_null.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:37:23 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:37:24 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Checks if the doubly linked list is NULL.
 *
 * @param list The doubly linked list.
 * @return true The list pointer isn't a valid memory address.
 * @return false The list pointer is valid memory address.
 */
bool	ft_dlst_is_null(t_dlist **list)
{
	return (list == NULL);
}
