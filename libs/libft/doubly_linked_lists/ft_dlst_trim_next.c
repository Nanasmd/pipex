/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_trim_next.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:38:30 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:38:31 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Safely erases a node's next reference.
 *
 * @param node The node to be trimmed.
 */
void	ft_dlst_trim_next(t_dlist *node)
{
	if (node == NULL)
		return ;
	node->next = NULL;
}
