/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scalloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:56:09 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:56:10 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Allocates (nmemb * size) bytes of memory memory
 * and sets them all to zero.
 * If allocation fails it terminates the program with an error.
 *
 * @param nmemb Number of elements.
 * @param size Byte size of each element.
 * @return void* The address of the allocated memory.
 */
void	*ft_scalloc(size_t nmemb, size_t size)
{
	size_t	total_size;
	void	*allocated;

	total_size = nmemb * size;
	allocated = ft_salloc(total_size);
	ft_bzero(allocated, total_size);
	return (allocated);
}
