/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:11:09 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:11:10 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Concatenates src to destination, writing size bytes at most.
 * Returns initial length of dst plus length of src for truncation detection.
 *
 * @param dst The destination address.
 * @param src The source address.
 * @param size The maximum number of bytes to write.
 * @return size_t The length of src plus the length of destination.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	destination_length;

	destination_length = ft_strlen(dst);
	if (size <= destination_length)
		return (size + ft_strlen(src));
	while (*src && destination_length < size - 1)
		*(dst + destination_length++) = *src++;
	*(dst + destination_length) = '\0';
	return (destination_length + ft_strlen(src));
}
