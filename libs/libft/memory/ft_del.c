/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:55:29 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:55:30 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Frees a pointer and sets its to NULL.
 *
 * @param delete_me The address to be freed and NULLed.
 */
void	ft_del(void **delete_me)
{
	if (delete_me == NULL || *delete_me == NULL)
		return ;
	free(*delete_me);
	*delete_me = NULL;
}
