/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:08:56 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:08:57 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts how many pointers a NULL-terminated string array has
 * including NULL.
 *
 * @param strings The NULL-terminated C-string array.
 * @return size_t The size of the array.
 */
size_t	ft_strarr_size(char **strings)
{
	return (ft_arr_size((void **)strings));
}
