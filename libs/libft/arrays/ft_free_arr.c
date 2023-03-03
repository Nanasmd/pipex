/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_arr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:27:37 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:27:38 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Frees a NULL-terminated array.
 *
 * @param free_me The array to be freed.
 */
void	ft_free_arr(void **free_me)
{
	void	**free_me_too;

	if (free_me == NULL)
		return ;
	free_me_too = free_me;
	while (*free_me)
		free(*free_me++);
	free(free_me_too);
}
