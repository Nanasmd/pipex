/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_lstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:46:49 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:46:50 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Frees a length string and sets its pointer to NULL.
 *
 * @param delete_me The length string to be deleted.
 */
void	ft_del_lstr(t_lstr **delete_me)
{
	ft_del((void **)delete_me);
}
