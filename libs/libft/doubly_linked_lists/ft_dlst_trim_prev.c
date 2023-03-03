/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_trim_prev.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:38:35 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:38:36 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Safely erases a node's previous reference.
 *
 * @param node The node to be trimmed.
 */
void	ft_dlst_trim_prev(t_dlist *node)
{
	if (node == NULL)
		return ;
	node->prev = NULL;
}
