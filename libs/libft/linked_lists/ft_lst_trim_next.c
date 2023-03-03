/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_trim_next.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:49:25 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:49:26 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Safely isoaltes a node by erasing its next reference.
 *
 * @param node The node to be trimmed.
 */
void	ft_lst_trim_next(t_list *node)
{
	if (node == NULL)
		return ;
	node->next = NULL;
}
