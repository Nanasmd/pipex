/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:10:34 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:10:35 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Frees a string and sets its pointer to NULL.
 *
 * @param delete_me The C-string to be deleted.
 */
void	ft_strdel(char **delete_me)
{
	ft_del((void **)delete_me);
}
