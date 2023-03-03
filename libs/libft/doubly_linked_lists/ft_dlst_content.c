/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_content.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:35:35 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:35:36 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Returns node's content.
 *
 * @param node The node to be dereferenced.
 * @return void* The node's content or NULL.
 */
void	*ft_dlst_content(t_dlist *node)
{
	if (node == NULL)
		return (NULL);
	if (node->content == NULL)
		return (NULL);
	return (node->content);
}
