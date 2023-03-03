/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_lalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:44:27 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:44:28 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Initializes lalloc (if necessary)
 * and adds the allocated address to the list.
 *
 * @param lalloc A linked list with the pointers of all allocated variables.
 * @param allocated_address An allocated memory address.
 */
void	ft_add_lalloc(t_list **lalloc, void *allocated_address)
{
	ft_lst_cadd_front(lalloc, allocated_address);
}
