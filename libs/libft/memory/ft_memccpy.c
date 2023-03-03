/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 02:55:32 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 02:55:33 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Copies up to to n bytes from src to dest, stopping at c if it finds it.
 * Not overlap safe.
 *
 * @param dest The destination addess.
 * @param src The source address.
 * @param c The char where the copying stops (useful for copying C-strings).
 * @param n The number of bytes to zero out.
 * @return void* The address after the stop or NULL.
 */
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*source_cast;
	unsigned char	*destination_cast;

	if (dest == NULL && src == NULL)
		return (NULL);
	source_cast = (unsigned char *)src;
	destination_cast = (unsigned char *)dest;
	while (n--)
	{
		*destination_cast = *source_cast;
		if (*source_cast == (unsigned char)c)
			return (++destination_cast);
		destination_cast++;
		source_cast++;
	}
	return (NULL);
}
