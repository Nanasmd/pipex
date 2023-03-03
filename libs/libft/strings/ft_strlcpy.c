/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nasamadi <nasamadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 03:11:14 by nasamadi          #+#    #+#             */
/*   Updated: 2023/03/03 03:11:15 by nasamadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <internals.h>

/**
 * @brief Copy first size chars from src to dst. Not overlap safe.
 *
 * @param dst The destination address.
 * @param src The source address.
 * @param size The number of bytes from src to copy.
 * @return size_t The length of src.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char			current_char;
	unsigned int	iterator;

	if (src == NULL)
		return (0);
	if (size > 0)
	{
		iterator = 0;
		current_char = src[iterator];
		while (current_char != '\0' && iterator < (size - 1))
		{
			dst[iterator] = current_char;
			iterator++;
			current_char = src[iterator];
		}
		dst[iterator] = '\0';
	}
	return (ft_strlen(src));
}
