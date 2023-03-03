/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:48:39 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:48:40 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Frees an allocated linked list and all of its contents.
 *
 * @param free_me The linked list to be freed.
 */
void	ft_lst_free(t_list **free_me)
{
	ft_lstclear(free_me, free);
}
