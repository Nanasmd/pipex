/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlst_trim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:38:39 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:38:40 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Safely isoaltes a node by erasing its next and previous references.
 *
 * @param node The node to be trimmed.
 */
void	ft_dlst_trim(t_dlist *node)
{
	ft_dlst_trim_prev(node);
	ft_dlst_trim_next(node);
}
