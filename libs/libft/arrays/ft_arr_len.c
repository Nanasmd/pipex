/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:27:29 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:27:30 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts how many pointers a NULL-terminated array has excluding NULL.
 *
 * @param array The array to be counted.
 * @return size_t The number of pointers.
 */
size_t	ft_arr_len(void **array)
{
	size_t	length;

	if (array == NULL)
		return (0);
	length = 0;
	while (array[length])
		length++;
	return (length);
}
