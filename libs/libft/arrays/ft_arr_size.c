/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:27:32 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:27:33 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Counts how many pointers a NULL-terminated array has including NULL.
 *
 * @param array The array to be counted.
 * @return size_t The number of pointers including NULL.
 */
size_t	ft_arr_size(void **array)
{
	return (ft_arr_len(array) + 1);
}
