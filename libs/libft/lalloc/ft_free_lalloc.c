/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_lalloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:46:15 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:46:16 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Frees the lalloc and all it's associated memory.
 *
 * @param free_me A linked list with the pointers of all allocated variables.
 */
void	ft_free_lalloc(t_list **free_me)
{
	ft_lst_free(free_me);
}
