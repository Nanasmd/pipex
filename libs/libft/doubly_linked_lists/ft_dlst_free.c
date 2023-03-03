/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:35:53 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:35:54 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Frees an allocated doubly linked list and all of its contents.
 *
 * @param free_me The doubly linked list.
 */
void	ft_dlst_free(t_dlist **free_me)
{
	ft_dlstclear(free_me, free);
}
