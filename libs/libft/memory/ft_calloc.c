/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:55:25 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:55:26 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Allocates (nmemb * size) bytes of memory memory
 * and sets them all to zero.
 *
 * @param nmemb Byte size of each element.
 * @param size Number of elements.
 * @return void* The address of the allocated memory.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*allocated;

	total_size = nmemb * size;
	allocated = malloc(total_size);
	if (allocated == NULL)
		return (NULL);
	ft_bzero(allocated, total_size);
	return (allocated);
}
