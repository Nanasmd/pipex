/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_trim.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:49:32 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:49:33 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Safely isoaltes a node by erasing its next reference.
 *
 * @param node The node to be trimmed.
 */
void	ft_lst_trim(t_list *node)
{
	ft_lst_trim_next(node);
}
