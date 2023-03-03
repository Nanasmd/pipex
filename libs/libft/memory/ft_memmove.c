/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:55:48 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:55:49 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Copies the n bytes after src to dest. Overlap safe.
 *
 * @param dest The destination address.
 * @param src The source address.
 * @param n Number of bytes to copy.
 * @return void* The address after it stopped copying.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*source_cast;
	unsigned char	*destination_cast;

	if ((dest == NULL && src == NULL) || n == 0)
		return (dest);
	if (src < dest)
	{
		source_cast = (unsigned char *)src + n - 1;
		destination_cast = (unsigned char *)dest + n - 1;
		while (n--)
		{
			*destination_cast = *source_cast;
			destination_cast--;
			source_cast--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
