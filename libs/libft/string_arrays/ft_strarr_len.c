/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:08:47 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:08:48 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts how many pointers
 * a NULL-terminated string array has excluding NULL.
 *
 * @param strings The NULL-terminated C-string array.
 * @return size_t The length of the array.
 */
size_t	ft_strarr_len(char **strings)
{
	return (ft_arr_len((void **)strings));
}
