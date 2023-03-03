/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:55:43 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:55:44 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Copies the n bytes after src to dest. Not overlap safe.
 *
 * @param dest The destination address.
 * @param src The source address.
 * @param n Number of bytes to copy.
 * @return void* The address after it stopped copying.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*source_cast;
	unsigned char	*destination_cast;

	if (dest == NULL && src == NULL)
		return (dest);
	source_cast = (unsigned char *)src;
	destination_cast = (unsigned char *)dest;
	while (n--)
	{
		*destination_cast = *source_cast;
		destination_cast++;
		source_cast++;
	}
	return (dest);
}
